/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 08:24:19 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/28 10:00:12 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t		i;

	if (n)
	{
		i = 0;
		while (src[i] && i < n)
		{
			dst[i] = src[i];
			i++;
		}
		while (i < n)
			dst[i++] = 0;
	}
	return (dst);
}
