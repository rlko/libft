/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 17:50:54 by rliou-ke          #+#    #+#             */
/*   Updated: 2016/03/14 20:44:12 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	slen(const char *s)
{
	char	*tmp;

	tmp = (char *)s;
	while (*tmp)
		tmp++;
	return (tmp - s);
}

void		ft_putstr(char const *s)
{
	write(1, s, slen(s));
}
