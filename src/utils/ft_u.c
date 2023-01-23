/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-oli <gade-oli@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:34:27 by gade-oli          #+#    #+#             */
/*   Updated: 2023/01/23 12:40:13 by gade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

int	unsigned_count(unsigned int n)
{
	int	res;

	res = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		res++;
	}
	return (res);
}

void	print_n_ascii(int a)
{
	char	b;

	b = a + '0';
	write(1, &b, 1);
}

void	print_unsigned(unsigned int n)
{
	if (n >= 10)
		print_unsigned(n / 10);
	print_n_ascii(n % 10);
}

int	print_unsigned_num(va_list args)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	print_unsigned(n);
	return (unsigned_count(n));
}
