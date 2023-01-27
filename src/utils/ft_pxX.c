/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pxX.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-oli <gade-oli@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:15:49 by gade-oli          #+#    #+#             */
/*   Updated: 2023/01/27 16:46:51 by gade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

int	print_hex(unsigned int n, int flag)
{
	int		res;
	char	*hexbase;

	res = 0;
	if (flag)
		hexbase = "0123456789ABCDEF";
	else
		hexbase = "0123456789abcdef";
	if (n >= 16)
		res += print_hex(n / 16, flag);
	ft_putchar_fd(hexbase[n % 16], 1);
	res++;
	return (res);
}

int	print_pointer(int n)
{
	int	res;

	ft_putstr_fd("0x", 1);
	res = 2 + print_hex(n, 0);
	return (res);
}
