/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:47:53 by rliou-ke          #+#    #+#             */
/*   Updated: 2014/12/03 13:17:39 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		i;

	i = 0;
	if (n < 1)
		return (0);
	while ((s1[i] == s2[i]) && s1[i] && s2[i] && (size_t)i < n)
		i++;
	if ((size_t)i == n)
		return ((int)((unsigned char)s1[i - 1] - (unsigned char)s2[i - 1]));
	return ((int)((unsigned char)s1[i] - (unsigned char)s2[i]));
}
