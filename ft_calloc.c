/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 12:59:57 by bfleury           #+#    #+#             */
/*   Updated: 2025/02/15 18:16:37 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;
	size_t	i;

	if (2147483647 <= nmemb || 2147483647 <= size)
	{
		if (nmemb == 0 || size == 0)
			return (malloc(0));
		return (NULL);
	}
	result = malloc(nmemb * size);
	i = 0;
	if (result)
		while (i < nmemb * size)
			((char *)result)[i++] = 0;
	return (result);
}
