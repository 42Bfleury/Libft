/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulonglen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 15:43:26 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/31 15:43:50 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_ulonglen(unsigned long n)
{
	int result;

	if (n > 0)
		result = 0;
	else
		result = 1;
	while (n)
	{
		result++;
		n /= 10;
	}
	return (result);
}
