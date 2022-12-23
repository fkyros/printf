/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:11:11 by gade-oli          #+#    #+#             */
/*   Updated: 2022/09/27 18:05:56 by gade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		ok;

	ok = 0;
	i = 0;
	while (i < n && ok == 0 && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
			ok = 1;
		else if ((unsigned char)s1[i] < (unsigned char)s2[i])
			ok = -1;
		i++;
	}
	return (ok);
}
