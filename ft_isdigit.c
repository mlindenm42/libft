/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlindenm <mlindenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:00:27 by mlindenm          #+#    #+#             */
/*   Updated: 2023/10/19 17:38:47 by mlindenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function checks if the input character 'c' represents a digit (0 to 9)
and returns 1 if it is, or 0 if it isn't.*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
