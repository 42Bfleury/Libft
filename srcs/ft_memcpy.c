/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 04:19:23 by bfleury           #+#    #+#             */
/*   Updated: 2025/02/08 15:08:49 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ptrdest;
	char	*ptrsrc;

	if (n && dest != src)
	{
		ptrdest = dest;
		ptrsrc = (char *)src;
		while (n--)
			*ptrdest++ = *ptrsrc++;
	}
	return (dest);
}
