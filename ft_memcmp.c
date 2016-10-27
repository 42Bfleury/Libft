/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 08:37:53 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/27 22:11:16 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*c1;
	char	*c2;

	if (n && s1 != s2)
	{
		c1 = (char*)s1;
		c2 = (char*)s2;
		while (n--)
			if (*c1++ != *c2++)
				return (*--c1 - *--c2);
	}
	return (0);
}
