/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 13:30:14 by bfleury           #+#    #+#             */
/*   Updated: 2015/12/09 10:01:34 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(const char *s1, const char *s2)
{
	int len1;
	int len2;

	len1 = (!s1) ? 0 : ft_strlen(s1);
	len2 = (!s2) ? 0 : ft_strlen(s2);
	return ((len1 != len2) ? 0 : ft_strnequ(s1, s2, len1));
}
