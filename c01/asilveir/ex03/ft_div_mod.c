/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:51:27 by asilveir          #+#    #+#             */
/*   Updated: 2024/08/31 22:52:46 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	divisao;
	int	resto_divisao;

	divisao = a / b;
	resto_divisao = a % b;
	*div = divisao;
	*mod = resto_divisao;
}

#include <stdio.h>

int	main()
{
	int	div;
	int	mod;
	ft_div_mod(10, 5, &div, &mod);
	printf("Divisao: %d", div);
	printf("\nModulo:%d", mod);
	return (0);
}
