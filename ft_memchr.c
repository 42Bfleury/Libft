/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 04:36:36 by bfleury           #+#    #+#             */
/*   Updated: 2023/11/19 04:37:16 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	if (n)
	{
		ptr = (unsigned char *)s;
		while (n--)
		{
			if (*ptr == (unsigned char)c)
				return ((void *)ptr);
			ptr++;
		}
	}
	return (NULL);
}
