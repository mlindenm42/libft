/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlindenm <mlindenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:28:46 by mlindenm          #+#    #+#             */
/*   Updated: 2023/10/19 17:46:15 by mlindenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*This is a C function, ft_strncmp, that compares the first n characters of two
strings s1 and s2 and returns an integer representing their order, with 0
indicating equality, a positive value indicating s1 is greater, and a negative
value indicating s2 is greater.*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < (n - 1))
		i++;
	if (s1[i] < 0 || s2[i] < 0)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (s1[i] - s2[i]);
}
