/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 19:23:18 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/30 19:24:13 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_wordlen(const char *s, char c)
{
	int		result;

	result = 0;
	while (*s && *s++ != c)
		result++;
	return (result);
}
