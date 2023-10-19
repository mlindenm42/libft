/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlindenm <mlindenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:24:25 by mlindenm          #+#    #+#             */
/*   Updated: 2023/10/19 17:48:24 by mlindenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function converts an uppercase character to its lowercase equivalent in
ASCII.*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
