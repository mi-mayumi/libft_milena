/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimayumi <mimayumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:40:00 by mimayumi          #+#    #+#             */
/*   Updated: 2024/10/24 15:04:14 by mimayumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t c;

	i = 0;
	c = 0;
	while (big[i] != '\0' && i < len)
	{
		if (little[c] == '\0')
			return ((char *)(&big[i]));
		while (little[c] && big[i + c] == little[c] && i + c < len)
		{
			return ((char *)(&big[i]));
			c++;
		}
		i++;
	}
	return (NULL);
}
				
#include <stdio.h>

int main(void)
{
	char big[] = "Foo Bar Baz\n";
	char little[] = "Baz";
	int len = 18;

	printf("%s", ft_strnstr(big, little, len));
	return (0);
}