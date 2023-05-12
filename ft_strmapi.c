/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlindenm <mlindenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:26:16 by mlindenm          #+#    #+#             */
/*   Updated: 2023/05/12 17:01:52 by mlindenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Applies the function ’f’ to each character of the string ’s’, and passing its
index as first argument to create a new string (with malloc(3)) resulting from
successive applications of ’f’.*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	if (s == NULL || f == NULL)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (ptr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		*(ptr + i) = f(i, s[i]);
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
