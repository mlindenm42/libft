/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlindenm <mlindenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:48:26 by mlindenm          #+#    #+#             */
/*   Updated: 2023/05/12 16:54:36 by mlindenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Adds the node ’new’ at the beginning of the list.*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst != NULL && new != NULL)
		new->next = *lst;
	*lst = new;
}
