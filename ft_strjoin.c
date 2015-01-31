/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 18:11:28 by rliou-ke          #+#    #+#             */
/*   Updated: 2014/11/12 17:21:43 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*tmp;
	unsigned int	size;

	if (s1 != NULL && s2 != NULL)
	{
		size = ft_strlen(s1) + ft_strlen(s2);
		tmp = (char *)malloc(sizeof(*tmp) * (size + 1));
		if (tmp)
		{
			tmp = ft_strcpy(tmp, s1);
			tmp = ft_strcat((char *)tmp, s2);
		}
		return (tmp);
	}
	return (NULL);
}
