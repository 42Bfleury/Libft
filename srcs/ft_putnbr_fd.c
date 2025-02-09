/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 04:57:33 by bfleury           #+#    #+#             */
/*   Updated: 2025/02/08 15:09:42 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		neg;
	char	c;

	neg = 1;
	if (n < 0)
	{
		neg = -1;
		write(fd, "-", 1);
	}
	if (n <= -10 || 10 <= n)
		ft_putnbr_fd(neg * (n / 10), fd);
	c = '0' + (neg * (n % 10));
	write(fd, &c, 1);
}
