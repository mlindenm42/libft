/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlindenm <mlindenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:19:01 by mlindenm          #+#    #+#             */
/*   Updated: 2023/10/19 17:39:32 by mlindenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Iterates the list ’lst’ and applies the function ’f’ on the content of each
node. Creates a new list resulting of the successive applications of the
function ’f’. The ’del’ function is used to delete the content of a node if
needed.*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*new;
	void	*copy;

	if (!lst || !f || !del)
		return (NULL);
	ptr = NULL;
	while (lst)
	{
		copy = NULL;
		copy = f(lst->content);
		new = ft_lstnew(copy);
		if (!new)
		{
			del(copy);
			ft_lstclear(&ptr, del);
			return (NULL);
		}
		ft_lstadd_back(&ptr, new);
		lst = lst->next;
	}
	lst = NULL;
	return (ptr);
}
