/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_dlst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 04:34:14 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/05/15 06:19:18 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_free_dlst(t_dlist **head)
{
	t_dlist	*l;
	t_dlist	*tmp;

	l = *head;
	while (l != NULL)
	{
		tmp = l;
		l = l->next;
		free(tmp);
	}
	*head = NULL;
}
