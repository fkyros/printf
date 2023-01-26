/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pxX.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-oli <gade-oli@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:15:49 by gade-oli          #+#    #+#             */
/*   Updated: 2023/01/26 13:40:56 by gade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

int	print_hex(int n, char *hexbase, int p)
{
	int		res;

	res = 0;
	if (p)
	{
		ft_putstr_fd("0x", 2);
		res += 2;
	}
	if (n >= 0 && n < 16)
	{
		ft_putchar_fd(hexbase[n - 1], 1);
		res++;
	}
	print_hex(n / 16, hexbase, 0);
	return (res);
}
