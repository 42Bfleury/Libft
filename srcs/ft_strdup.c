/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 04:42:59 by bfleury           #+#    #+#             */
/*   Updated: 2025/02/08 15:10:18 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s)
{
	int		lenght;
	char	*result;

	lenght = ft_strlen(s) + 1;
	result = ft_calloc(lenght, sizeof(*result));
	if (lenght && result)
		ft_strlcpy(result, s, lenght);
	return (result);
}
