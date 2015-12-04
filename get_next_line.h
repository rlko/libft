/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/05 21:01:43 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/12/04 18:06:28 by Lon              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 64
int get_next_line(int const fd, char **line);
typedef struct		s_gnl
{
	int				fd;
	char			*stock;
	struct s_gnl	*next;
}					t_gnl;
#endif
