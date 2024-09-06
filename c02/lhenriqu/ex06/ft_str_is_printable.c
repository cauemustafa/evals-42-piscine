/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhenriqu <lhenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:11:22 by lhenriqu          #+#    #+#             */
/*   Updated: 2024/08/29 17:48:00 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 127))
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

 	r = ft_str_is_printable("");
 	w = ft_str_is_printable(" ");
 	x = ft_str_is_printable("	");
 	z = ft_str_is_printable("sdfsdf");
 	printf("%i", r);
 	printf("%i", w);
 	printf("%i", x);
 	printf("%i", z);
 }
