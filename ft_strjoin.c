/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <benjamin.fleury@hotmail.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 00:39:41 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/30 15:47:18 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	char	*result;

	result = NULL;
	if (s1 && s2 && (result = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
	{
		i = 0;
		while (*s1)
			result[i++] = *s1++;
		while (*s2)
			result[i++] = *s2++;
	}
	return (result);
}
