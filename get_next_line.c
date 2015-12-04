/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/05 21:00:38 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/12/04 18:51:55 by Lon              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

static t_gnl	*prep_stock(int const fd)
{
	static t_gnl	*begin = NULL;
	t_gnl			*lst;

	lst = begin;
	while (lst)
	{
		if (lst->fd == fd)
			return (lst);
		lst = lst->next;
	}
	if (!(lst = malloc(sizeof(*lst))))
			return (NULL);
	lst->fd = fd;
 	if (!(lst->stock = malloc(sizeof(lst->stock))))
		return (NULL);
	lst->next = begin;
	begin = lst;
	return (lst);
}

static int		get_next_leftovers(char **line, char **stock)
{
	char	*chr;

	chr = ft_strchr(*stock, '\n');
	if (*stock != 0 && chr)
	{
		*line = ft_strsub(*stock, 0, chr - *stock);
		*stock = chr + 1;
		return (1);
	}
	return (0);
}

static int		read_buffer(int const fd, char **line, char **stock)
{
	int		ret;
	char	*chr;
	char	*buf;
	char	*tmp;

	if (!(buf = malloc(BUFF_SIZE + 1)))
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)) && *stock != 0)
	{
		buf[ret] = 0;
		if ((chr = ft_strchr(buf, '\n')))
		{
			tmp = ft_strsub(buf, 0, chr - buf);
			*line = ft_strjoin(*line, tmp);
			ft_strdel(&tmp);
			*stock = ft_strdup(chr + 1);
			ft_strdel(&buf);
			return (1);
		}
		*line = ft_strjoin(*line, buf);
	}
	return (ret);
}

int		get_next_line(int const fd, char **line)
{
	t_gnl	*lst;

	if (fd < 0 || !line || BUFF_SIZE < 1 || !(lst = prep_stock(fd)))
		return (-1);
	if (!*line)
		free(*line);
	*line = 0;
	if (get_next_leftovers(line, &lst->stock))
		return (1);
	else if (lst->stock != 0)
		*line = lst->stock;
	return (read_buffer(fd, line, &lst->stock));
}
