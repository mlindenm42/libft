/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlindenm <mlindenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:30:18 by mlindenm          #+#    #+#             */
/*   Updated: 2023/05/12 16:59:36 by mlindenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Outputs the string ’s’ to the given file descriptor followed by a newline.*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!(s == NULL))
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}
