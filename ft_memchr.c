/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 14:49:37 by rliou-ke          #+#    #+#             */
/*   Updated: 2014/11/15 14:42:08 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cs;
	unsigned char	uc;

	i = 0;
	cs = (unsigned char *)s;
	uc = c;
	while (i < n)
	{
		if (cs[i] == uc)
			return (cs + i);
		i++;
	}
	return (NULL);
}
