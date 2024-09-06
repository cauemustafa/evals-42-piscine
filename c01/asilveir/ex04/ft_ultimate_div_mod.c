/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:11:57 by asilveir          #+#    #+#             */
/*   Updated: 2024/08/31 22:54:01 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division_result;
	int	module_result;

	division_result = *a / *b;
	module_result = *a % *b;
	*a = division_result;
	*b = module_result;
}

int	main(void)
{
	int	a = 10;
	int	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("Divisão: %d", a);
	printf("Modulo: %d", b);
	return (0);
}
