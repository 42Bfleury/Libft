/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 04:18:24 by bfleury           #+#    #+#             */
/*   Updated: 2025/02/08 15:10:47 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*ptrdst;
	char		*ptrsrc;
	size_t		n;
	size_t		dstlen;

	if ((!dst || !src) && !size)
		return (0);
	ptrdst = dst;
	ptrsrc = (char *)src;
	n = size;
	while (*ptrdst && n--)
		ptrdst++;
	dstlen = ptrdst - dst;
	n = size - dstlen;
	if (!n)
		return (dstlen + ft_strlen(ptrsrc));
	while (*ptrsrc++)
		if (n-- != 1 || (n++ && 0))
			*ptrdst++ = *(ptrsrc - 1);
	*ptrdst = '\0';
	return (dstlen + (--ptrsrc - src));
}
