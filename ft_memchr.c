/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moha <mel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:19:04 by mel-moha          #+#    #+#             */
/*   Updated: 2025/05/31 12:19:06 by mel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	i = 0;
	str = (const unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return ((void *)(&str[i]));
		}
		i++;
	}
	return (NULL);
}
