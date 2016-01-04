/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 03:10:48 by bfleury           #+#    #+#             */
/*   Updated: 2015/12/17 03:48:09 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*ptrdst;
	const char	*ptrsrc;

	if (n && dst != src)
	{
		ptrdst = dst;
		ptrsrc = src;
		while (n--)
			if ((*ptrdst++ = *ptrsrc++) == c)
				return (ptrdst);
	}
	return (NULL);
}
