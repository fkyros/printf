/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:19:20 by gade-oli          #+#    #+#             */
/*   Updated: 2022/09/27 17:57:01 by gade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	found;

	i = ft_strlen(s);
	found = 0;
	while (!found && i >= 0)
	{
		if (s[i] == (char)c)
			found = 1;
		else
			i--;
	}
	if (found)
		return ((char *)(s + i));
	return (NULL);
}
