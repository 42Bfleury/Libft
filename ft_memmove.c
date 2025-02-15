/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 04:19:28 by bfleury           #+#    #+#             */
/*   Updated: 2025/02/15 16:21:51 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (n && dest != src)
	{
		if (dest < src)
			ft_memcpy(dest, src, n);
		else
			while (n--)
				*((char *)dest + n) = *((char *)src + n);
	}
	return (dest);
}
