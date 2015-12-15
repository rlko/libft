/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 15:52:58 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/12/15 15:57:17 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_getnbr(const char *str)
{
	int		i;
	int		c;

	i = 0;
	c = 0;
	while (str[i] != 0)
	{
		if ((str[i] == '-' && ft_isdigit(str[i + 1])) || ft_isdigit(str[i]))
		{
			i = i + 1;
			while (str[i] && ft_isdigit(str[i]))
				i++;
			c++;
		}
		else
			i++;
	}
	return (c);
}
