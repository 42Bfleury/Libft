/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 08:24:19 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/28 04:00:35 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t		i;

	if (n && dst != src)
	{
		i = 0;
		while (src[i] && i < n)
		{
			if (src[i])
				dst[i] = src[i];
			else
				dst[i] = 0;
			i++;
		}
	}
	return (dst);
}
