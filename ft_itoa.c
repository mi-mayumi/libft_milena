/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimayumi <mimayumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:06:13 by mimayumi          #+#    #+#             */
/*   Updated: 2024/11/05 15:27:46 by mimayumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_is_negative(long nb)
{
	if (nb >= 0)
		return (0);
	else
		return (1);
}

static long	ft_n_digits(long nb)
{
	long	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		negative;
	int		digits;
	long	number;

	number = n;
	negative = ft_is_negative(number);
	if (negative == 1)
		number = number * -1;
	digits = ft_n_digits(number);
	result = (char *)malloc(digits + negative + 1);
	if (result == NULL)
		return (NULL);
	if (negative == 1)
		result[0] = '-';
	result[digits + negative] = '\0';
	while (digits > 0)
	{
		result[(digits - 1) + negative] = (number % 10) + '0';
		number = number / 10;
		digits--;
	}
	return (result);
}
