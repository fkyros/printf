/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-oli <gade-oli@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:14:48 by gade-oli          #+#    #+#             */
/*   Updated: 2022/11/17 21:51:12 by gade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	size_t	tam;

	tam = ft_strlen(s1) + 1;
	res = (char *)malloc(tam);
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s1, tam);
	return (res);
}
