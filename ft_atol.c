/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/05 04:15:03 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/05/12 07:25:39 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long ft_atol(const char *str)
{
	int		plusle;
	long	i;
	long	res;

	i = 0;
	plusle = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		plusle = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			break ;
		res = res * 10 + str[i++] - '0';
	}
	return (plusle * res);
}
