/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <benjamin.fleury@hotmail.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 16:53:43 by bfleury           #+#    #+#             */
/*   Updated: 2015/12/17 04:59:32 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	dst_len;

	if (n && dst != src)
	{
		i = 0;
		dst_len = ft_strlen(dst);
		while (src[i] && i++ < n)
			dst[dst_len + i - 1] = src[i - 1];
		dst[dst_len + i] = '\0';
	}
	return (dst);
}
