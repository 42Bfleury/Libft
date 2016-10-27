/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 09:06:30 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/27 18:18:13 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static int	ft_nb_word(const char *s, char c)
{
	int word;
	int result;

	word = 0;
	result = 0;
	while (*s)
	{
		if (!word && *s != c)
		{
			word = 1;
			result++;
		}
		else if (word && *s == c)
			word = 0;
		s++;
	}
	return (result);
}

static int	ft_word_len(const char *s, char c)
{
	int result;

	result = 0;
	while (*s && *s++ != c)
		result++;
	return (result);
}

char		**ft_strsplit(const char *s, char c)
{
	int		i;
	int		nb_word;
	char	**result;

	if (s)
	{
		i = 0;
		nb_word = ft_nb_word(s, c);
		if (!(result = (char**)malloc(sizeof(char *) * (nb_word + 1))))
			return (NULL);
		while (nb_word--)
		{
			while (*s && *s == c)
				s++;
			if (!(result[i++] = ft_strsub(s, 0, ft_word_len(s, c))))
				return (NULL);
			s += ft_word_len(s, c);
		}
		result[i] = NULL;
		return (result);
	}
	return (NULL);
}
