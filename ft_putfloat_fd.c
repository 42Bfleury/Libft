/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <benjamin.fleury@hotmail.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 21:26:29 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/27 22:33:11 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_putfloat_fd(float d, int fd)
{
	int		i;

	if (fd > 0)
	{
		i = 0;
		ft_putnbr_fd((int)d, fd);
		d -= (int)d;
		ft_putchar_fd('.', fd);
		if (d)
		{
			while (i++ < 6)
				d *= 10;
			ft_putnbr_fd(d, fd);
		}
		else
			ft_putstr_fd("000000", fd);
	}
}
