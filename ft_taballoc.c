/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_taballoc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 10:19:06 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/12/02 12:28:20 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	**ft_taballoc(size_t size)
{
	char	**tab;

	tab = malloc(sizeof(tab) * size + 1);
	if (tab)
		tab[size] = 0;
	return (tab);
}
