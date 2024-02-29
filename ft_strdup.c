/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 04:42:59 by bfleury           #+#    #+#             */
/*   Updated: 2024/02/29 12:26:21 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		lenght;
	char	*result;

	lenght = ft_strlen(s) + 1;
	result = (char *)ft_calloc(lenght, sizeof(*result));
	if (lenght && result)
		ft_strlcpy(result, s, lenght);
	return (result);
}
