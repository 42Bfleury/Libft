/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 04:38:06 by bfleury           #+#    #+#             */
/*   Updated: 2023/11/19 04:39:03 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;

	if (n && s1 != s2)
	{
		c1 = (unsigned char *)s1;
		c2 = (unsigned char *)s2;
		while (n--)
		{
			if (*c1 != *c2)
				return (*c1 - *c2);
			c1++;
			c2++;
		}
	}
	return (0);
}
