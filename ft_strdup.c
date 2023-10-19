/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlindenm <mlindenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:06:06 by mlindenm          #+#    #+#             */
/*   Updated: 2023/10/19 17:43:12 by mlindenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function duplicates a given C string and returns a pointer to the newly
allocated memory containing the duplicated string.*/

char	*ft_strdup(const char *str)
{
	char	*ptr;

	ptr = NULL;
	ptr = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, str, (ft_strlen(str) + 1));
	return (ptr);
}
