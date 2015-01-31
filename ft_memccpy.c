/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:58:04 by rliou-ke          #+#    #+#             */
/*   Updated: 2014/12/03 13:01:30 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int		i;
	char	*cdst;
	char	*csrc;

	i = 0;
	cdst = (char *)dst;
	csrc = (char *)src;
	while ((size_t)i < n)
	{
		cdst[i] = csrc[i];
		if (csrc[i] == c)
		{
			dst = (void *)cdst;
			return (dst + 1 + i);
		}
		i++;
	}
	dst = (void*)cdst;
	return (NULL);
}
