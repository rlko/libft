/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 17:03:09 by rliou-ke          #+#    #+#             */
/*   Updated: 2016/03/05 07:45:56 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_count_word(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (j);
}

static int		ft_count_letter(const char *s, char c, unsigned int i)
{
	int	len;

	len = 0;
	while (s[i] != c && s[i])
	{
		i++;
		len++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		len;
	char	**tab;

	i = 0;
	j = 0;
	if (!s || !(tab = malloc(sizeof(*tab) * (ft_count_word(s, c) + 1))))
		return (NULL);
	while (s[i] != 0)
	{
		if (s[i] != c)
		{
			len = ft_count_letter(s, c, i);
			if (!(tab[j] = ft_strsub(s, i, len)))
				return (NULL);
			j++;
			i = i + len;
		}
		else
			i++;
	}
	tab[j] = NULL;
	return (tab);
}
