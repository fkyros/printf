/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-oli <gade-oli@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 10:53:48 by gade-oli          #+#    #+#             */
/*   Updated: 2022/12/08 03:22:48 by gade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	res;
	int	i;
	int	lock;

	i = 0;
	res = 0;
	lock = 0;
	while (s[i])
	{
		if (s[i] != c && !lock)
		{
			res++;
			lock = 1;
		}
		else if (s[i] == c)
			lock = 0;
		i++;
	}
	return (res);
}

void	*free_matrix(char **res)
{
	int	i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		flag;

	res = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && j < count_words(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		flag = i;
		while (s[i] && s[i] != c)
			i++;
		res[j] = (char *)malloc(sizeof(char) * (i - flag + 1));
		if (!res[j])
			return (free_matrix(res));
		ft_strlcpy(res[j], s + flag, i - flag + 1);
		j++;
	}
	res[j] = NULL;
	return (res);
}
