/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putyo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lon <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 18:31:25 by Lon               #+#    #+#             */
/*   Updated: 2015/12/04 18:31:30 by Lon              ###   ########.fr       */
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
