/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlindenm <mlindenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 20:53:53 by mlindenm          #+#    #+#             */
/*   Updated: 2023/10/19 17:39:17 by mlindenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Deletes and frees the given node and every successor of that node, using the
function ’del’ and free(3). Finally, the pointer to the list must be set to
NULL.*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	ptr = NULL;
	while (*lst != NULL)
	{
		ptr = (*lst)->next;
		if (*lst != NULL && del != NULL)
		{
			(del)((*lst)->content);
			free(*lst);
		}
		*lst = ptr;
	}
	*lst = NULL;
}
