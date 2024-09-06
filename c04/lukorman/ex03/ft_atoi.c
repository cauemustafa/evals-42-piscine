/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 02:53:13 by lukorman          #+#    #+#             */
/*   Updated: 2024/09/04 17:43:13 by lukorman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_atoi(char *str)
{
	int	i;
	int	posneg;
	int	number;

	i = 0;
	while (str[i] <= 32)
	{
		i++;
	}
	posneg = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			posneg *= -1;
		i++;
	}
	number = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		number *= 10;
		number += (str[i] - 48);
		i++;
	}
	return (number * posneg);
}
