/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-oli <gade-oli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:59:16 by gade-oli          #+#    #+#             */
/*   Updated: 2022/11/24 11:50:58 by gade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;

	dlen = ft_strlen(dest);
	j = dlen;
	i = 0;
	if (size == 0)
		return ((size_t)ft_strlen((char *)src));
	if (size <= dlen)
		return (ft_strlen(src) + size);
	while (i < (size - dlen - 1) && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + ft_strlen(src));
}
