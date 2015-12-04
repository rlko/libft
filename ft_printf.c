/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 11:19:50 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/11/27 08:58:22 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printstr(va_list pa)
{
	char	*str;

	str = va_arg(pa, char *);
	if (str == NULL)
	{
		ft_putstr("NULL");
		return (4);
	}
	ft_putstr(str);
	return (ft_strlen(str));
}

int		ft_printnbr(va_list pa)
{
	char	*nb;

	nb = ft_itoa(va_arg(pa, int));
	ft_putstr(nb);
	return (ft_strlen(nb));
}

int		ft_printchar(va_list pa)
{
	ft_putchar(va_arg(pa, int));
	return (1);
}

int		ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	pa;

	i = 0;
	len = 0;
	va_start(pa, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' )
		{
			if (format[i + 1] == 's')
				len += ft_printstr(pa);
			else if (format[i + 1] == 'd')
				len += ft_printnbr(pa);
			else if (format[i + 1] == 'c')
				len += ft_printchar(pa);
			else if (format[i + 1] == '%')
			{
				ft_putchar('%');
				len++;
			}
			i++;
		}
		else 
			ft_putchar(format[i]);
		i++;
	}
	va_end(pa);

	return (1);
}
