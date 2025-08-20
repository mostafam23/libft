/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moha <mel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:20:35 by mel-moha          #+#    #+#             */
/*   Updated: 2025/05/31 12:20:36 by mel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	assign(size_t *i, size_t *j)
{
	*i = 0;
	*j = 0;
}

static void	assign2(size_t *len1, size_t *len2, char const *s1, char const *s2)
{
	*len1 = ft_strlen(s1);
	*len2 = ft_strlen(s2);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	i;
	size_t	j;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	assign(&i, &j);
	assign2(&len1, &len2, s1, s2);
	joined = (char *)malloc(len1 + len2 + 1);
	if (!joined)
		return (NULL);
	while (i < len1)
	{
		joined[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		joined[i + j] = s2[j];
		j++;
	}
	joined[i + j] = '\0';
	return (joined);
}
