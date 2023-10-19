/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlindenm <mlindenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:16:07 by mlindenm          #+#    #+#             */
/*   Updated: 2023/10/19 17:38:45 by mlindenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function checks if an integer 'c' represents an ASCII character (with a
decimal value between 0 and 127) and returns 1 if true, 0 otherwise.*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
