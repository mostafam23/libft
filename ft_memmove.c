/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moha <mel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:19:23 by mel-moha          #+#    #+#             */
/*   Updated: 2025/05/31 12:19:24 by mel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*arr_dest;
	const unsigned char	*arr_src;

	i = 0;
	arr_dest = (unsigned char *) dest;
	arr_src = (const unsigned char *) src;
	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			arr_dest[i - 1] = arr_src[i - 1];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			arr_dest[i] = arr_src[i];
			i++;
		}
	}
	return (dest);
}
