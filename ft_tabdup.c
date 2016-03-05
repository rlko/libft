/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 10:08:38 by rliou-ke          #+#    #+#             */
/*   Updated: 2016/03/05 10:09:27 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char			**ft_tabdup(char **tab)
{
	int			i;
	char		**new;

	if (!(new = malloc(sizeof(tab) * (ft_tablen(tab) + 1))))
		ft_exit_error("ft_tabdup: malloc: new");
	i = 0;
	while (tab[i] != 0)
	{
		if (!(new[i] = ft_strdup(tab[i])))
			ft_exit_error("ft_tabdup: ft_strdup: new[i]");
		i++;
	}
	tab[i] = 0;
	return (new);
}
