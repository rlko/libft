/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 16:46:15 by rliou-ke          #+#    #+#             */
/*   Updated: 2016/03/05 06:20:09 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char			*tmp;
	unsigned int	i;

	i = 0;
	tmp = malloc(sizeof(tmp) * ((size) + 1));
	if (tmp)
	{
		while (i <= size)
			tmp[i++] = '\0';
	}
	return (tmp);
}
