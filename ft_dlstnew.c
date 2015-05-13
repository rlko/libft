/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 17:17:36 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/05/12 07:30:49 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_dlst	*ft_dlstnew(void const *content, size_t content_size)
{
	t_dlst	*new;

	if (!(new = (t_dlst *)malloc(sizeof(t_dlst))))
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		new->content_size = content_size;
		if (!(new->content = ft_memalloc(new->content_size)))
			return (NULL);
		new->content = ft_memcpy(new->content, content, new->content_size + 1);
		((char *)(new->content))[new->content_size] = '\0';
	}
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
