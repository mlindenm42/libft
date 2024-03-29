/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlindenm <mlindenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:22:59 by mlindenm          #+#    #+#             */
/*   Updated: 2023/10/19 17:41:11 by mlindenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function, ft_memcmp, compares the first n bytes of two memory blocks (s1
and s2) and returns an integer indicating their relative ordering.*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	if (n <= 0)
		return (0);
	if (s1 == s2)
		return (0);
	i = 0;
	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	while (ptr_s1[i] == ptr_s2[i] && i < (n - 1))
		i++;
	return (ptr_s1[i] - ptr_s2[i]);
}
