/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-oli <gade-oli@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:46:54 by gade-oli          #+#    #+#             */
/*   Updated: 2022/12/09 17:18:43 by gade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	real_len;
	size_t	subslen;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen)
		return (ft_strdup(""));
	subslen = ft_strlen(s + start);
	if (len > subslen)
	{
		real_len = subslen + 1;
		res = (char *)malloc(real_len);
	}
	else
	{
		real_len = len + 1;
		res = (char *)malloc(real_len);
	}
	if (!res)
		return (NULL);
	ft_strlcpy(res, s + start, real_len);
	return (res);
}
