/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 23:33:17 by bfleury           #+#    #+#             */
/*   Updated: 2015/12/17 05:24:30 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len2;

	if (!*s2)
		return ((char *)s1);
	len2 = ft_strlen(s2);
	while (*s1++ && n-- >= len2)
		if (*(s1 - 1) == *s2 && !ft_memcmp(s1 - 1, s2, len2))
			return ((char *)--s1);
	return (NULL);
}
