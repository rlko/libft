/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 10:21:29 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/12/01 10:21:57 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_power(int base, int n)
{
	int half_pow;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (1 / ft_power(base, -n));
	else if (n % 2 == 0)
	{
		half_pow = ft_power(base, n / 2);
		return (half_pow * half_pow);
	}
	else
		return (base * ft_power(base, n - 1));
}
