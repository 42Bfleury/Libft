/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <benjamin.fleury@hotmail.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 16:53:43 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/29 16:09:53 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t		i;

	if (n && dst != src)
	{
		i = 0;
		while (dst[i])
			i++;
		while (n-- && *src)
			dst[i++] = *src++;
		dst[i] = 0;
	}
	return (dst);
}
