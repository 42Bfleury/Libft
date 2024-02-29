/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 00:39:41 by bfleury           #+#    #+#             */
/*   Updated: 2024/02/29 12:32:25 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	char	*result;

	result = NULL;
	i = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (s1 && s2)
		result = (char *)ft_calloc(i, sizeof(*result));
	if (result)
	{
		i = 0;
		while (*s1)
			result[i++] = *s1++;
		while (*s2)
			result[i++] = *s2++;
		result[i] = '\0';
	}
	return (result);
}
