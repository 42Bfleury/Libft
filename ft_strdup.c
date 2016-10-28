/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <benjamin.fleury@hotmail.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 23:11:15 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/28 12:36:33 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;

	str = NULL;
	if ((str = ft_strnew(ft_strlen(s))))
		ft_strcpy(str, s);
	return (str);
}
