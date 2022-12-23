/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-oli <gade-oli@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:05:21 by gade-oli          #+#    #+#             */
/*   Updated: 2022/11/17 21:15:51 by gade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	copy_string_from_index(const char *src, char *dst, int i)
{
	int	j;

	j = 0;
	while (src[j])
	{
		dst[i] = src[j];
		j++;
		i++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		tam;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	tam = ft_strlen(s1) + ft_strlen(s2) + 1;
	res = (char *) malloc(tam);
	if (res == NULL)
		return (NULL);
	if (s1 != NULL)
		copy_string_from_index(s1, res, 0);
	if (s2 != NULL)
		copy_string_from_index(s2, res, ft_strlen(s1));
	res[tam - 1] = '\0';
	return (res);
}
