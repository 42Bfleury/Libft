/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <benjamin.fleury@hotmail.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 00:39:41 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/28 12:45:26 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*result;

	if (s1 && s2)
	{
		if (!(result = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
			return (NULL);
		ft_strcat(ft_strcpy(result, s1), s2);
		return (result);
	}
	return (NULL);
}
