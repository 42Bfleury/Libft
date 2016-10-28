/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 23:33:17 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/28 03:37:08 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		len;

	if (!*s2)
		return ((char*)s1);
	len = ft_strlen(s2);
	while (*s1 && n-- >= len)
	{
		if (*s1 == *s2 && !ft_memcmp(s1, s2, len))
			return ((char*)s1);
		s1++;
	}
	return (NULL);
}
