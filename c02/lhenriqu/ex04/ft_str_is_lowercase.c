/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhenriqu <lhenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:52:57 by lhenriqu          #+#    #+#             */
/*   Updated: 2024/08/29 17:42:10 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	int	r;
	int	w;
	int	x;
	int	z;

	r = ft_str_is_lowercase("");
	w = ft_str_is_lowercase("IA");
	x = ft_str_is_lowercase("aa");
	z = ft_str_is_lowercase("4");
	printf("%i", r);
	printf("%i", w);
	printf("%i", x);
	printf("%i", z);
}

