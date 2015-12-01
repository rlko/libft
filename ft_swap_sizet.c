/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 14:17:28 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/12/01 13:00:34 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_swap_sizet(size_t *a, size_t *b)
{
	int tmp;

	if (a && b)
	{
		tmp = *b;
		*b = *a;
		*a = tmp;
	}
}
