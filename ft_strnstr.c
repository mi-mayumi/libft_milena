/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimayumi <mimayumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:40:00 by mimayumi          #+#    #+#             */
/*   Updated: 2024/10/26 15:37:13 by mimayumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		c = 0;
		while (little[c] && big[i + c] == little[c] && i + c < len)
			c++;
		if (little[c] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
