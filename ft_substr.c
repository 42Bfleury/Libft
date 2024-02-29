/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 04:45:51 by bfleury           #+#    #+#             */
/*   Updated: 2024/02/29 14:23:52 by bfleury          ###   ########.fr       */
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
	result = ft_calloc(len + 1, sizeof(*result));
	if (!result)
		return (NULL);
	ft_memcpy(result, &s[start], len);
	result[len] = 0;
	return (result);
}
