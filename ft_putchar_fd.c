/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlindenm <mlindenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:04:33 by mlindenm          #+#    #+#             */
/*   Updated: 2023/05/12 17:00:19 by mlindenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Outputs the character ’c’ to the given file descriptor.*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
