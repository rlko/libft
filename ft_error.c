/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 15:22:24 by rliou-ke          #+#    #+#             */
/*   Updated: 2016/03/19 11:54:43 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static int	slen(const char *s)
{
	char	*i;

	i = (char *)s;
	while (*i)
		++i;
	return (i - s);
}

int			ft_error(char *s)
{
	write(2, s, slen(s));
	write(2, "\n", 1);
	return (1);
}

void		ft_exit_error(char *s)
{
	ft_error(s);
	exit(EXIT_FAILURE);
}
