/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlindenm <mlindenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:21:32 by mlindenm          #+#    #+#             */
/*   Updated: 2023/05/12 17:00:08 by mlindenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Outputs the string ’s’ to the given file descriptor.*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!(s == NULL))
		write(fd, s, ft_strlen(s));
}
