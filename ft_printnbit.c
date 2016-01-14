/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 02:07:01 by bfleury           #+#    #+#             */
/*   Updated: 2016/01/14 03:14:08 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_printnbit(long n, size_t size, size_t count, char c)
{
	int		i;
	char	bits[64];

	i = 0;
	while (i++ < size)
		bits[i - 1] = (n >> (i - 1) & 1) ? '1' : '0';
	while (--i)
	{
		if (i < (size - 1) && !(i % count))
			ft_putchar(c);
		ft_putchar(bits[i - 1]);
	}
}
