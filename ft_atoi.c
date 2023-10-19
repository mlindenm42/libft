/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlindenm <mlindenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:32:06 by mlindenm          #+#    #+#             */
/*   Updated: 2023/10/19 17:38:33 by mlindenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function converts a string of characters to an integer, handling various
cases, and returns the resulting integer value.*/

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long int	res;

	i = 0;
	sign = 1;
	res = 0;
	if (str[i] == '\007' || str[i] == '\010')
		return (0);
	while ((str[i] >= 7 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (i > 0 && str[i - 1] == '-')
		sign = -1;
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + (str[i] - 48);
		if (res * sign > 2147483647)
			return (-1);
		if (res * sign < -2147483648)
			return (0);
		i++;
	}
	return (sign * res);
}
