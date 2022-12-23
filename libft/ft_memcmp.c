/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-oli <gade-oli@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:33:25 by gade-oli          #+#    #+#             */
/*   Updated: 2022/09/27 17:25:08 by gade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		res;

	res = 0;
	i = 0;
	while (!res && i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			res = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
		else
			i++;
	}
	return (res);
}
