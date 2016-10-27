/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 06:22:12 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/27 22:18:57 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;

	if (n)
	{
		ptr = (char*)s;
		while (n--)
			if (*ptr++ == c)
				return ((void*)(ptr - 1));
	}
	return (NULL);
}
