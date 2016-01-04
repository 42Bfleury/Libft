/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 10:24:16 by bfleury           #+#    #+#             */
/*   Updated: 2015/12/17 03:32:07 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	unsigned char *tmp;

	if (ptr)
		tmp = (unsigned char *)ptr;
	while (tmp && len--)
		*tmp++ = (unsigned char)c;
	return (ptr);
}
