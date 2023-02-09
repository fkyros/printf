/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-oli <gade-oli@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:37:49 by gade-oli          #+#    #+#             */
/*   Updated: 2023/02/09 17:52:00 by gade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	print_formatted(char c, va_list args)
{
	int	nchars;

	nchars = 0;
	if (c == 'd' || c == 'i')
		nchars = print_num(args);
	else if (c == 'c')
		nchars = print_char(args);
	else if (c == 'u')
		nchars = print_unsigned_num(args);
	else if (c == 's')
		nchars = print_str(args);
	else if (c == '%')
	{
		ft_putchar_fd('%', 1);
		nchars = 1;
	}
	else if (c == 'X')
		nchars = print_hex(va_arg(args, int), 1);
	else if (c == 'x')
		nchars = print_hex(va_arg(args, int), 0);
	else if (c == 'p')
		nchars = print_pointer(va_arg(args, size_t));
	return (nchars);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		nchars;

	va_start(args, str);
	nchars = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (!str[i])
				break ;
			else
				nchars += print_formatted(str[i++], args);
		}
		else
		{
			nchars++;
			ft_putchar_fd(str[i++], 1);
		}
	}
	va_end(args);
	return (nchars);
}
