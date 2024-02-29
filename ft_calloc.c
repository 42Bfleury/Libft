/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 12:59:57 by bfleury           #+#    #+#             */
/*   Updated: 2024/02/29 14:17:18 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if (2147483647 <= nmemb || 2147483647 <= size)
	{
		if (nmemb == 0 || size == 0)
			return (malloc(0));
		return (NULL);
	}
	result = malloc(nmemb * size);
	if (result)
		ft_bzero(result, nmemb * size);
	return (result);
}
