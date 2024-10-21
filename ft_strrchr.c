/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimayumi <mimayumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:24:10 by mimayumi          #+#    #+#             */
/*   Updated: 2024/10/21 15:38:05 by mimayumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char*)&s[i]);
		else
			i--;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char s[] = "Hello";
	int c = 'l';

	printf("%s\n", ft_strrchr(s, c));
	return (0);
}