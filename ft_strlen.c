/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:48:29 by rliou-ke          #+#    #+#             */
/*   Updated: 2016/03/14 09:46:02 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t		ft_strlen(const char *s)
{
	char	*tmp;

	tmp = (char *)s;
	while (*tmp)
		*tmp++;
	return (tmp - s);
}
