/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:06:55 by bfleury           #+#    #+#             */
/*   Updated: 2025/02/08 15:14:37 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	void	*tmp;
	t_list	*node;
	t_list	*result;

	if (!lst || !f || !del)
		return (NULL);
	result = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		node = ft_lstnew(tmp);
		if (!node)
		{
			del(tmp);
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, node);
		lst = lst->next;
	}
	return (result);
}
