/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 04:48:38 by bfleury           #+#    #+#             */
/*   Updated: 2024/01/16 01:00:25 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	_in_tab(char const *tab, char c)
{
	int		i;

	i = 0;
	while (tab[i])
	{
		if (tab[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;

	if (!s1)
		return (NULL);
	if (!*s1)
		return (ft_strdup(""));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && _in_tab(set, s1[start]))
		start++;
	while (end > start && _in_tab(set, s1[end]))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}
