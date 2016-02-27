/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putyo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 18:31:25 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/12/15 15:55:47 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putyo(void)
{
	static int	i = 0;

	ft_putstr("yo #");
	ft_putnbr(i);
	ft_putchar('\n');
	i++;
}