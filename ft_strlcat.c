/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moha <mel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:20:41 by mel-moha          #+#    #+#             */
/*   Updated: 2025/05/31 12:20:46 by mel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
	{
		i++;
	}
	while (src[j] && ((i + j + 1) < size))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
	{
		dst[i + j] = '\0';
	}
	while (src[j])
	{
		j++;
	}
	return (i + j);
}
