/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratanaka <ratanaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:03:02 by ratanaka          #+#    #+#             */
/*   Updated: 2024/08/28 12:03:22 by ratanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int*b)
{
	int	c;

	if (*b != 0)
	{
		c = (*a / *b);
		*b = (*a % *b);
		*a = c;
	}
}

/*int	main(void)
{
	int	c;
	int	d;
	int	*a;
	int	*b;

	a = &c;
	b = &d;
	c = 25;
	d = 5;
	printf("Antes da Funcao: %d e %d \n", *a, *b);
	ft_ultimate_div_mod(a, b);
	printf("Depois da Funcao: %d e %d", *a, *b);
	return (0);
}*/
