/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlindenm <mlindenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:39:28 by mlindenm          #+#    #+#             */
/*   Updated: 2023/05/12 17:04:02 by mlindenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	ptr = NULL;
	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (i < len && s[i] != '\0')
	{
		*(ptr + i) = s[start + i];
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
