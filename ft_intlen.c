/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 14:27:02 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/31 14:27:30 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_intlen(int n)
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
