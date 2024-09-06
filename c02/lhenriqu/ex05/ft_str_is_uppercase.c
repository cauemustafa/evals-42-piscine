/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhenriqu <lhenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:03:01 by lhenriqu          #+#    #+#             */
/*   Updated: 2024/08/29 17:45:49 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	int	r = ft_str_is_uppercase("");
	int	w = ft_str_is_uppercase("1");
	int	x = ft_str_is_uppercase("i");
	int	z = ft_str_is_uppercase("A");
	printf("%i", r);
	printf("%i", w);
	printf("%i", x);
	printf("%i", z);
}

