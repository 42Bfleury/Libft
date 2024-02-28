/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 04:32:21 by bfleury           #+#    #+#             */
/*   Updated: 2024/02/28 12:27:39 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*ptr;

	c %= 256;
	ptr = (unsigned char *)s + ft_strlen(s);
	while (ptr >= (unsigned char *)s)
	{
		if (*ptr == c)
			return ((char *)ptr);
		ptr--;
	}
	return (NULL);
}
