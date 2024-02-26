/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 04:19:28 by bfleury           #+#    #+#             */
/*   Updated: 2024/01/16 00:39:21 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptrdst;
	char	*ptrsrc;

	if (n && dest != src)
	{
		ptrdst = dest + n - 1;
		ptrsrc = (char *)src + n - 1;
		if (src > dest)
			ft_memcpy(dest, src, n);
		else
			while (n--)
				*ptrdst-- = *ptrsrc--;
	}
	return (dest);
}
