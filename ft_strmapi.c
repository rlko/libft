/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 12:58:03 by rliou-ke          #+#    #+#             */
/*   Updated: 2016/05/21 16:49:52 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*tmp;

	if (s != NULL && f != NULL)
	{
		i = 0;
		if ((tmp = ft_strnew(ft_strlen(s))))
		{
			while (s[i])
			{
				tmp[i] = f(i, s[i]);
				i++;
			}
			return (tmp);
		}
	}
	return (NULL);
}
