/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:08:34 by bfleury           #+#    #+#             */
/*   Updated: 2024/03/02 18:08:35 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	_count_words(const char *s, char c)
{
	int		word;
	int		result;

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

static int	_word_len(const char *s, char c)
{
	int		result;

	result = 0;
	while (*s && *s++ != c)
		result++;
	return (result);
}

static void	*_clear_result(char ***result)
{
	int	i;

	i = 0;
	while ((*result)[i])
		free((*result)[i++]);
	free(*result);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		nb_word;
	int		wordlen;
	char	**result;

	if (!s)
		return (NULL);
	i = 0;
	nb_word = _count_words(s, c);
	result = ft_calloc((nb_word + 1), sizeof(*result));
	if (!result)
		return (NULL);
	while (nb_word--)
	{
		while (*s && *s == c)
			s++;
		wordlen = _word_len(s, c);
		result[i] = ft_substr(s, 0, wordlen);
		if (!result[i++])
			return (_clear_result(&result));
		s += wordlen;
	}
	result[i] = NULL;
	return (result);
}
