/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:16:28 by araveala          #+#    #+#             */
/*   Updated: 2024/03/01 14:12:12 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_array(const char *s, char c)
{
	int	count;
	int	on_off;

	count = 0;
	on_off = 0;
	if (c == '\0')
		return (1);
	while (*s != '\0')
	{
		if (*s != c && on_off == 0)
		{
			on_off = 1;
			count++;
		}
		else if (*s == c)
			on_off = 0;
		s++;
	}
	return (count);
}

static int	ft_count_sub_len(const char *s, char c, int sublen)
{
	int	save;

	save = sublen;
	sublen = 0;
	if (!s)
		return (0);
	while (s[save] != '\0' && s[save] != c)
	{
		save++;
		sublen++;
	}
	return (sublen);
}

static char	**free_loop(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	unsigned long int	i;
	int					index;
	char				**array;
	int					sublen;

	i = 0;
	index = 0;
	array = ft_calloc(sizeof(char *), ft_count_array(s, c) + 1);
	if (array == NULL)
		return (NULL);
	while (i < ft_strlen(s))
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			return (array);
		sublen = ft_count_sub_len(s, c, i);
		array[index] = ft_substr(s, i, sublen);
		if (!array[index])
			return (free_loop(array));
		i = i + sublen;
		index++;
	}
	return (array);
}
