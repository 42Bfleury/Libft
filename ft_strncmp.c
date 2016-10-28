/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <benjamin.fleury@hotmail.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 23:25:51 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/28 05:44:42 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		i;

	i = ft_max(ft_strlen(s1), ft_strlen(s2));
	i = ft_min(i, (int)n);
	return (ft_memcmp(s1, s2, i));
}
