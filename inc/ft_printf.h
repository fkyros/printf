/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-oli <gade-oli@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:40:33 by gade-oli          #+#    #+#             */
/*   Updated: 2023/02/07 00:05:55 by gade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	print_num(va_list args);
int	print_unsigned_num(va_list args);
int	print_char(va_list args);
int	print_str(va_list args);
unsigned int	print_hex(unsigned int n, int flag);
unsigned int	print_pointer(unsigned int n);

#endif
