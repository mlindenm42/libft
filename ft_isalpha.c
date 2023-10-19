/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlindenm <mlindenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:04:24 by mlindenm          #+#    #+#             */
/*   Updated: 2023/10/19 17:38:43 by mlindenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function checks if the input integer corresponds to an alphabetic
character in ASCII and returns 1 if true, 0 otherwise.*/

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
