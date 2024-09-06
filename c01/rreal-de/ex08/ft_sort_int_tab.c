/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreal-de <rreal-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:23:19 by rreal-de          #+#    #+#             */
/*   Updated: 2024/08/21 01:32:38 by rreal-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	value;
	int	i;
	int	z;

	i = 0;
	while (i < size -1)
	{
		z = 0;
		while (z < size -1 - i)
		{
			if (tab[z] > tab[z +1])
			{
				value = tab[z];
				tab[z] = tab[z + 1];
				tab[z + 1] = value;
			}
			z++;
		}
		i++;
	}
}

int	main(void)
{
	int	arr[5] = {7, 10, 5, 54, 12};
	int	main_size;

	main_size = 5;
	ft_sort_int_tab(arr, main_size);
	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);
	printf("%d\n", arr[4]);
}