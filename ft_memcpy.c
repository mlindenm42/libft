/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlindenm <mlindenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:56:40 by mlindenm          #+#    #+#             */
/*   Updated: 2023/10/19 17:41:27 by mlindenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*This function, ft_memcpy, copies 'n' bytes of data from 'src' to 'dest' and
returns a pointer to 'dest'.*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr_dest;
	char	*ptr_src;

	i = 0;
	if (dest == src)
		return (dest);
	ptr_dest = (char *) dest;
	ptr_src = (char *) src;
	while (i < n)
	{
		ptr_dest[i] = ptr_src [i];
		i++;
	}
	return (dest);
}
