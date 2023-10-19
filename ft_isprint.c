/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlindenm <mlindenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:40:22 by mlindenm          #+#    #+#             */
/*   Updated: 2023/10/19 17:39:04 by mlindenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This C function, ft_isprint, checks if the input character (c) represents a
printable ASCII character (with decimal values between 32 and 126) and returns
1 if true, 0 if false.*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
