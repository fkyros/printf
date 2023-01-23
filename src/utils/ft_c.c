/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-oli <gade-oli@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:33:21 by gade-oli          #+#    #+#             */
/*   Updated: 2023/01/23 11:38:23 by gade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

int	print_char(va_list args)
{
	unsigned char	c;

	c = va_arg(args, int);
	ft_putchar_fd(c, 1);
	return (1);
}
