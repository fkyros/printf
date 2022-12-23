/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-oli <gade-oli@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:53:10 by gade-oli          #+#    #+#             */
/*   Updated: 2022/09/27 17:28:27 by gade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	int		found;

	found = 0;
	i = 0;
	while (!found && i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			found = 1;
		else
			i++;
	}
	if (found)
		return ((unsigned char *)s + i);
	return (NULL);
}
