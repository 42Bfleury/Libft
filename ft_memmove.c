/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 03:45:27 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/27 22:20:09 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*ptrdst;
	char	*ptrsrc;

	if (n && dst != src)
	{
		ptrdst = dst + n - 1;
		ptrsrc = (char*)src + n - 1;
		if (src > dst)
			ft_memcpy(dst, src, n);
		else
			while (n--)
				*ptrdst-- = *ptrsrc--;
	}
	return (dst);
}
