/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 12:47:23 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/12/02 12:47:49 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_tabdel(char **tab, int size)
{
	int	i;

	i = 0;
	while (i <= size)
	{
		ft_strdel(&tab[i]);
		i++;
	}
	free(tab);
}
