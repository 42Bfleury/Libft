/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 18:56:22 by bfleury           #+#    #+#             */
/*   Updated: 2016/01/18 19:29:13 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_pow(int nb, int pow)
{
	if (pow < 0)
		return (0);
	return ((pow) ? (nb * ft_pow(nb, pow - 1)) : 1);
}
