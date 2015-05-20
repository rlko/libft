/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 13:22:42 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/05/20 07:40:58 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_digit(int d)
{
	int count;

	count = 0;
	if (d <= 0)
		count = 1;
	while (d)
	{
		d = d / 10;
		count++;
	}
	return (count);
}

char			*ft_itoa(int n)
{
	char	*strnb;
	int		i;
	int		negative;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	strnb = ft_strnew(ft_count_digit(n));
	if (strnb)
	{
		negative = (n < 0 ? 1 : 0);
		n = (n < 0 ? n * -1 : n);
		strnb[0] = (negative == 1 ? '-' : strnb[0]);
		i = (negative == 1 ? ft_count_digit(n) : ft_count_digit(n) - 1);
		while (n)
		{
			strnb[i] = n % 10 + '0';
			n = n / 10;
			i--;
		}
	}
	return (strnb);
}
