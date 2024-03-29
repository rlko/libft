/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 15:31:02 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/05/20 10:17:38 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int i;
	int j;

	i = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[i])
	{
		j = 0;
		while (s1[i] == s2[j] && (size_t)i < n)
		{
			i++;
			j++;
			if (s2[j] == '\0')
				return ((char *)&s1[i - j]);
		}
		i = i - j;
		i++;
	}
	return (NULL);
}
