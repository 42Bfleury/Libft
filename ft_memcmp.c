/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 08:37:53 by bfleury           #+#    #+#             */
/*   Updated: 2015/12/18 02:08:25 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *c1;
	const unsigned char *c2;

	if (n && s1 != s2)
	{
		c1 = (const unsigned char *)s1;
		c2 = (const unsigned char *)s2;
		while (n--)
			if (*c1++ != *c2++)
				return (*--c1 - *--c2);
	}
	return (0);
}
