/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlindenm <mlindenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:52:22 by mlindenm          #+#    #+#             */
/*   Updated: 2023/10/19 17:47:24 by mlindenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function searches for the first occurrence of a substring (s2) within a
given string (s1) up to a specified length (n) and returns a pointer to the
location of the first match or NULL if not found.*/

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s2[0] == '\0')
		return ((char *)&s1[0]);
	while (s1[i] != '\0' && i < n)
	{
		j = 0;
		while ((unsigned char)s1[i + j] == (unsigned char)s2[j] && (i + j) < n)
		{
			if (s2[j + 1] == '\0')
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
