/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlindenm <mlindenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:08:35 by mlindenm          #+#    #+#             */
/*   Updated: 2023/10/19 17:40:19 by mlindenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Counts the number of nodes in a list.*/

#include "libft.h"

/*This function calculates the number of elements in a linked list.*/

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
