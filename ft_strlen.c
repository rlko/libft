/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:48:29 by rliou-ke          #+#    #+#             */
/*   Updated: 2016/05/21 12:40:35 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t		ft_strlen(const char *s)
{
	register const char	*tmp;

	tmp = (char *)s;
	while (*tmp)
		++tmp;
	return (tmp - s);
}
