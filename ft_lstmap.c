/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 03:02:06 by bfleury           #+#    #+#             */
/*   Updated: 2024/02/28 17:50:31 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
