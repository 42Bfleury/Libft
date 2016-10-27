/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 10:24:16 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/27 20:32:19 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	char	*tmp;

	tmp = (char*)ptr;
	while (len--)
		*tmp++ = c;
	return (ptr);
}
