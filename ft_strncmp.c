/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <benjamin.fleury@hotmail.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 23:25:51 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/27 18:16:49 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_strncmp(const char *s, const char *s2, size_t n)
{
	return (ft_memcmp(s, s2, ft_min(ft_max(ft_strlen(s), ft_strlen(s2)), n)));
}
