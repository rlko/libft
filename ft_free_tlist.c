/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tlist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 04:34:14 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/05/03 04:45:08 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_free_tlist(t_list **head)
{
	t_list	*l;
	t_list	*tmp;

	l = *head;
	while (l != NULL)
	{
		tmp = l;
		l = l->next;
		free(tmp);
	}
	*head = NULL;
}
