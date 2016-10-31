/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 15:51:02 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/31 15:52:08 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_uitoa_base(unsigned int nb, int base)
{
	int		i;
	char	*table;
	char	result[MAX_INT_LENGTH + 1];

	if (base < 2 || base > 36)
		return (NULL);
	i = MAX_INT_LENGTH;
	table = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	result[i--] = 0;
	while (nb)
	{
		result[i--] = table[nb % base];
		nb /= base;
	}
	return (ft_strdup(result + i + 1));
}
