/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:47:19 by rliou-ke          #+#    #+#             */
/*   Updated: 2014/11/12 17:12:46 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *s1)
{
	char *tmp;

	tmp = (char *)malloc(sizeof(tmp) * (ft_strlen(s1) + 1));
	if (tmp)
		tmp = ft_strcpy(tmp, s1);
	return (tmp);
}
