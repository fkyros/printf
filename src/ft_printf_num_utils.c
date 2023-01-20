/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_num_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-oli <gade-oli@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 17:08:02 by gade-oli          #+#    #+#             */
/*   Updated: 2023/01/20 15:58:38 by gade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	count(int n)
{
	int	res;

	res = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		res += 1;
	while (n != 0)
	{
		n /= 10;
		res++;
	}
	return (res);
}

int	print_num(va_list args, int unsign)
{
	int	n;
	char *res;

	n = va_arg(args, int);
	if (unsign == 0)
		res = ft_itoa(n);
	else
		res = ft_itoa((unsigned int) n);
	ft_putstr_fd(res, 1);
	free(res);
	return (count(n));
}

int print_char(va_list args)
{
	unsigned char c;

	c = va_arg(args, int);
	ft_putchar_fd(c, 1);
	return (1);
}

int print_hex(va_list args)
{
	
}
