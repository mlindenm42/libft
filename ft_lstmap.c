/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlindenm <mlindenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:19:01 by mlindenm          #+#    #+#             */
/*   Updated: 2023/05/11 09:51:13 by mlindenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*new;

	ptr = NULL;
	new = NULL;
	if (lst == NULL)
		return (NULL);
	ptr = ft_lstnew(f(lst->content));
	if (ptr == NULL)
		return (NULL);
	lst = lst->next;
	while (lst != NULL)
	{
		new = ft_lstnew(f(lst->content));
		if (new == NULL)
		{
			ft_lstclear(&ptr, del);
			ptr = NULL;
			return (NULL);
		}
		ft_lstadd_back(&ptr, new);
		new = NULL;
		lst = lst->next;
	}
	return (ptr);
}
