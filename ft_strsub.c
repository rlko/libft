/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 13:07:32 by rliou-ke          #+#    #+#             */
/*   Updated: 2016/03/05 06:05:53 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*tmp;
	unsigned int	i;
	unsigned int	j;

	if (s)
	{
		i = 0;
		j = start;
		tmp = (char*)malloc(sizeof(char *) * (len + 1));
		if (tmp)
		{
			while (s[j] && i < len)
				tmp[i++] = s[j++];
			tmp[i] = '\0';
		}
		return (tmp);
	}
	return (NULL);
}
