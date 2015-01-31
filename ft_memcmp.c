/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:25:44 by rliou-ke          #+#    #+#             */
/*   Updated: 2014/12/03 15:44:40 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int					i;
	const unsigned char *cs1;
	const unsigned char *cs2;

	i = 0;
	cs1 = s1;
	cs2 = s2;
	if (n < 1)
		return (0);
	while ((size_t)i < n)
	{
		if (cs1[i] == cs2[i])
			i++;
		else
			return ((int)(cs1[i] - cs2[i]));
	}
	return (0);
}
