/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 21:27:55 by asilveir          #+#    #+#             */
/*   Updated: 2024/08/31 22:51:10 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main()
{
	int n_a = 3;
	int n_b = 9;
	int *a = &n_a;
	int *b = &n_b;
	ft_swap(a, b);
	printf("A: %d", n_a);
	printf("B: %d", n_b);
	return (0);
}

