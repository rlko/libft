/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 14:04:00 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/05/20 07:42:13 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isblank(int c)
{
	if (c)
	{
		if (c == ' ' || c == '\n' || c == '\t')
			return (1);
		return (0);
	}
	return (c);
}

char			*ft_strtrim(char const *s)
{
	char	*tmp;
	size_t	i;
	size_t	j;
	int		size;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s);
	while (ft_isblank(s[j - 1]))
		j--;
	while (ft_isblank(s[i]))
		i++;
	if (s[i] == '\0')
	{
		tmp = ft_strnew(0);
		return (tmp);
	}
	size = j - i;
	size = (size < 0 ? 0 : size);
	tmp = ft_strsub(s, i, size);
	return (tmp);
}
