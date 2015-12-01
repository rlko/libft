/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dectobin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 10:55:27 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/12/01 10:22:06 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_dectobin(int nb)
{
	long	bin;
	int		n;
	int		p;

	n = 0;
	bin = 0;
	while (ft_power(2, n) < nb)
		n++;
	n--;
	while (nb)
	{
		if (nb >= (p = ft_power(2, n)))
		{
			nb = nb - p;
			bin = ft_power(10, n) + bin;
		}
		n--;
	}
	return (bin);
}
