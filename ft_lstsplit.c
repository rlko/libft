/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 03:12:01 by rliou-ke          #+#    #+#             */
/*   Updated: 2016/02/27 18:14:28 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		delimit(char *str, int delimchar, int i)
{
	while (str[i] != '\0')
	{
		if (str[i] == delimchar)
			return (++i);
		i++;
	}
	return (i);
}

static t_list	*mk_path_node(char *str, int i, int j)
{
	t_list		*node;

	node = NULL;
	if (!(node = malloc(sizeof(*node))))
		ft_exit_error("mk_path_node: malloc: node");
	node->content_size = j - i - 1;
	if (!(node->content = ft_strsub(str, i, node->content_size)))
		ft_exit_error("mk_path_node: ft_strsub: node->content");
	node->next = NULL;
	return (node);
}

static t_list	*add_node(t_list *begin, t_list *new)
{
	t_list		*current;
	t_list		*prev;

	prev = NULL;
	current = begin;
	while (current != NULL)
	{
		prev = current;
		current = current->next;
	}
	if (prev == NULL)
	{
		new->next = begin;
		return (new);
	}
	prev->next = new;
	new->next = current;
	return (begin);
}

t_list			*ft_lstsplit(char *str, int c)
{
	int			i;
	int			j;
	int			len;
	t_list		*list;
	t_list		*head;

	if (!str || !(list = malloc(sizeof(list))))
		return (NULL);
	head = NULL;
	i = 0;
	j = 0;
	len = ft_strlen(str);
	while (i != len)
	{
		j = delimit(str, c, i);
		if ((list = mk_path_node(str, i, j == len ? j + 1 : j)))
			head = add_node(head, list);
		while (str[j] && str[j] == c)
			j++;
		i = j;
	}
	return (head);
}
