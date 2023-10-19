/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlindenm <mlindenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:12:46 by mlindenm          #+#    #+#             */
/*   Updated: 2023/10/19 17:38:41 by mlindenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This C function checks if the input character 'c' is alphanumeric (a letter
or a digit) and returns 1 if it is, otherwise 0.*/

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
