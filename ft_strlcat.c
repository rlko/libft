/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:55:10 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/11/23 10:44:41 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t n;
	size_t ldst;

	i = 0;
	n = size;
	while (dst[i] && n-- != 0)
		i++;
	ldst = &dst[i] - dst;
	n = size - ldst;
	if (n == 0)
		return (ldst + ft_strlen(src));
	j = 0;
	while (src[j])
	{
		if (n != 1)
		{
			dst[i++] = src[j];
			n--;
		}
		j++;
	}
	dst[i] = '\0';
	return (ldst + (&src[j] - src));
}
