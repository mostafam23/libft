/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moha <mel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:21:21 by mel-moha          #+#    #+#             */
/*   Updated: 2025/05/31 12:21:22 by mel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*last;
	int			i;

	i = 0;
	last = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			last = (char *)&s[i];
		}
		i++;
	}
	if (s[i] == (char)c)
	{
		return ((char *)&s[i]);
	}
	return (last);
}
