/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlindenm <mlindenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:00:11 by mlindenm          #+#    #+#             */
/*   Updated: 2023/10/19 17:44:11 by mlindenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function appends a string (src) to another string (dst) while ensuring
the combined result does not exceed a specified length (n) and returns the
final length of the concatenated string.*/

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	dst_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	if (n <= dst_len)
		return (ft_strlen(src) + n);
	i = 0;
	while ((dst_len + i) < (n - 1) && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (ft_strlen(src) + dst_len);
}
