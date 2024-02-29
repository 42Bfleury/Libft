/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 04:50:51 by bfleury           #+#    #+#             */
/*   Updated: 2024/02/29 14:10:41 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	_intlen(int n)
{
	int	result;

	result = 0;
	if (n <= 0)
		result++;
	while (n)
	{
		result++;
		n /= 10;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	int		i;
	int		neg;
	char	*result;

	neg = 1;
	i = _intlen(n);
	result = ft_calloc((i + 1), sizeof(*result));
	if (!result)
		return (NULL);
	result[i--] = 0;
	if (n == 0)
		result[0] = '0';
	else if (n < 0)
	{
		neg = -1;
		result[0] = '-';
	}
	while (n)
	{
		result[i--] = '0' + (neg * (n % 10));
		n /= 10;
	}
	return (result);
}
