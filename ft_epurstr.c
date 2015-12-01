/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_epurstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/24 02:49:36 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/11/27 09:30:59 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	begin_epur(char *str)
{
	int i;

	i = 0;
	while (ft_isblank(str[i]))
		i++;
	return (i);
}

char		*ft_epurstr(char *str)
{
	char	*tmp;
	char	*tmp2;
	int		i;
	int		j;

	i = begin_epur(str);
	j = 0;
	tmp = ft_strnew(ft_strlen(str));
	while (str[i] != 0)
	{
		if (!(ft_isblank(str[i]) && ft_isblank(str[i - 1])))
		{
			tmp[j] = (ft_isblank(str[i]) ? ' ' : str[i]);
			j++;
		}
		i++;
	}
	tmp[j] = 0;
	if (ft_isblank(tmp[j - 1]))
		tmp[j - 1] = 0;
	tmp2 = ft_strdup(tmp);
	ft_bzero(tmp, ft_strlen(str));
	ft_strdel(&tmp);
	return (tmp2);
}
