/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 08:24:19 by bfleury           #+#    #+#             */
/*   Updated: 2015/12/17 04:53:04 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	if (n && dst != src)
	{
		i = 0;
		while (src[i] && i++ < n)
			dst[i - 1] = src[i - 1];
		while (i < n)
			dst[i++] = '\0';
	}
	return (dst);
}
