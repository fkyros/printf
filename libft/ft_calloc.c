/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-oli <gade-oli@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 17:31:28 by gade-oli          #+#    #+#             */
/*   Updated: 2022/10/08 19:04:51 by gade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			tam;
	unsigned char	*res;

	tam = size * count;
	res = malloc((int)tam);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, tam);
	return (res);
}
