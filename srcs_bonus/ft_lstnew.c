/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:07:21 by bfleury           #+#    #+#             */
/*   Updated: 2025/02/08 15:14:46 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*result;

	result = ft_calloc(1, sizeof(*result));
	if (!result)
		return (NULL);
	result->next = NULL;
	result->content = content;
	return (result);
}
