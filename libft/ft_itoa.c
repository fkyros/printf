/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-oli <gade-oli@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:55:52 by gade-oli          #+#    #+#             */
/*   Updated: 2022/12/09 12:39:28 by gade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits_n_sign(int n)
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

int	num_pow(int num, int pow)
{
	int	res;
	int	i;

	res = 1;
	i = 0;
	while (i < pow)
	{
		res *= num;
		i++;
	}
	return (res);
}

char	*algorithm(int n)
{
	char	*res;
	int		nd;
	int		i;
	int		d;
	int		pos;

	nd = count_digits_n_sign(n);
	res = (char *)malloc(sizeof(char) * (nd + 1));
	if (!res)
		return (NULL);
	i = 0;
	pos = nd;
	if (n < 0)
	{
		res[i++] = '-';
		n *= -1;
		pos--;
	}
	while (i < nd)
	{
		d = (n / num_pow(10, --pos)) % 10;
		res[i++] = d + '0';
	}
	res[i] = '\0';
	return (res);
}

char	*ft_itoa(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else
		return (algorithm(n));
}
