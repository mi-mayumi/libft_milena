/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimayumi <mimayumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:24:10 by mimayumi          #+#    #+#             */
/*   Updated: 2024/10/21 18:44:11 by mimayumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	len;

	len = 0;
	while (s[len] != '\0')
	{
		if (s[len] == c)
			return ((char *)(&s[len]));
		len--;
	}
	if (c == '\0')
		return ((char *)(&s[len]));
	return (NULL);
}

#include <stdio.h>

int	main(void)
{
	char s[] = "Hello";
	int c = 'l';

	printf("%s\n", ft_strrchr(s, c));
	return (0);
}