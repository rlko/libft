/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 17:03:09 by rliou-ke          #+#    #+#             */
/*   Updated: 2014/11/13 17:36:44 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ft_count_word(char const *s, char c)
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

int		ft_count_letter(const char *s, char c, unsigned int start)
{
	int	i;

	i = 0;
	while (s[start + i] != c && s[i])
		i++;
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	if (!s || s == 0)
		return (0);
	tab = (char**)malloc(sizeof(tab) * ft_count_word(s, c) + 1);
	tab[ft_count_word(s, c)] = NULL;
	while (s[i])
	{
		if (s[i] != c)
		{
			tab[j] = (char*)malloc(sizeof(tab) * ft_count_letter(s, c, i));
			tab[j] = ft_strsub(s, i, ft_count_letter(s, c, i));
			j++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (tab);
}
