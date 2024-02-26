/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 04:45:51 by bfleury           #+#    #+#             */
/*   Updated: 2024/01/16 01:00:38 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	lenght;
	char	*result;

	if (!s)
		return (NULL);
	lenght = ft_strlen(s);
	if (start > lenght)
		len = 0;
	else if (start + len > lenght)
		len = lenght - start;
	result = (char *)malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	ft_memcpy(result, &s[start], len);
	result[len] = 0;
	return (result);
}
