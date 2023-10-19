/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlindenm <mlindenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:08:21 by mlindenm          #+#    #+#             */
/*   Updated: 2023/10/19 17:49:11 by mlindenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function converts a lowercase ASCII character to its uppercase
equivalent.*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
