/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <benjamin.fleury@hotmail.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 17:53:18 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/28 03:39:44 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char*)s + ft_strlen(s);
	while (ptr >= s)
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
