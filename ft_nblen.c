/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nblen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 19:57:16 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/30 20:04:43 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_nblen(long n)
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