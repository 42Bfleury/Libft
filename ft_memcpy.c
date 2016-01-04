/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 02:28:35 by bfleury           #+#    #+#             */
/*   Updated: 2015/12/17 03:48:06 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*ptrdst;
	const char	*ptrsrc;

	if (n && dst != src)
	{
		ptrdst = dst;
		ptrsrc = src;
		while (n--)
			*ptrdst++ = *ptrsrc++;
	}
	return (dst);
}
