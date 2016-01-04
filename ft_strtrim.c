/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 03:38:22 by bfleury           #+#    #+#             */
/*   Updated: 2015/12/09 06:59:36 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	unsigned int	end;

	if (!s || !*s)
		return ((!s) ? NULL : ft_strnew(0));
	start = 0;
	end = ft_strlen(s) - 1;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	while (end > start && (s[end] == ' ' || s[end] == '\n' || s[end] == '\t'))
		end--;
	return (ft_strsub(s, start, ++end - start));
}
