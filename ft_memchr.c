/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 06:22:12 by bfleury           #+#    #+#             */
/*   Updated: 2015/12/17 05:10:04 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char *ptr;

	if (n)
	{
		ptr = s;
		while (n--)
			if (*ptr++ == (char)c)
				return ((void *)(--ptr));
	}
	return (NULL);
}
