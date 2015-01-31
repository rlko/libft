/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 14:48:56 by rliou-ke          #+#    #+#             */
/*   Updated: 2014/12/03 15:17:52 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list*))
{
	t_list	*nlst;
	t_list	*tmp;
	t_list	*tmp2;

	if (!lst || !f)
		return (NULL);
	tmp2 = f(lst);
	nlst = ft_lstnew(tmp2->content, tmp2->content_size);
	if (nlst)
	{
		tmp = nlst;
		lst = lst->next;
		while (lst)
		{
			tmp2 = f(lst);
			tmp->next = ft_lstnew(tmp2->content, tmp2->content_size);
			if (!(tmp->next))
				return (NULL);
			tmp = tmp->next;
			lst = lst->next;
		}
	}
	return (nlst);
}
