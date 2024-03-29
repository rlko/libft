/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 18:42:35 by rliou-ke          #+#    #+#             */
/*   Updated: 2016/05/21 16:43:50 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*tmp;

	if (s != NULL && f != NULL)
	{
		i = 0;
		if ((tmp = ft_strnew(ft_strlen(s))))
		{
			while (s[i])
			{
				tmp[i] = f(s[i]);
				i++;
			}
			return (tmp);
		}
	}
	return (NULL);
}
