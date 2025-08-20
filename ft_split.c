/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moha <mel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:20:12 by mel-moha          #+#    #+#             */
/*   Updated: 2025/05/31 12:20:13 by mel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	size_t	count;
	int		i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

static char	*sub_str(const char *str, size_t len)
{
	char		*res;
	size_t		i;

	i = 0;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(const char *s, char c)
{
	char		**result;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	result = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			while (s[j] && s[j] != c)
				j++;
			result[i] = sub_str(s, j);
			i++;
			s = s + j;
			j = 0;
		}
	}
	result[i] = NULL;
	return (result);
}
