/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-oli <gade-oli@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:37:49 by gade-oli          #+#    #+#             */
/*   Updated: 2022/12/23 18:12:04 by gade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	print_formatted(char c, va_list args)
{
	int nchars;

	nchars = 0;
	if (c == 'd')
		nchars = print_num(args);
	return (nchars);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int i;
	int nchars;

	va_start(args, str);
	nchars = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (!str[i])
				break;
			else
				nchars += print_formatted(str[i++], args);
		}
		else
		{
			nchars++;
			ft_putchar_fd(str[i], 1);
			i++;
		}
	}
	va_end(args);
	return (nchars);
}
