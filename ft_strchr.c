/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimayumi <mimayumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:45:28 by mimayumi          #+#    #+#             */
/*   Updated: 2024/10/22 18:15:57 by mimayumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)(&s[i]));
		i++;
	}
	if (c == '\0')
	{
		return ((char *)(&s[i]));
	}
	return (NULL);
}

#include<stdio.h>
int main(void)
{
	char	*s ="abcd";
	printf("%s, %s",s, ft_strchr(s, 'c'));
	return(0);
}