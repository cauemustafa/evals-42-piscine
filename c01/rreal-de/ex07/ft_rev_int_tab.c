/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreal-de <rreal-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 02:02:31 by rreal-de          #+#    #+#             */
/*   Updated: 2024/08/21 01:20:08 by rreal-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	swap;

	size--;
	count = 0;
	{
		while (count < size)
		{
			swap = tab[count];
			tab[count] = tab[size];
			tab[size] = swap;
			size--;
			count++;
		}
	}
}

int	main(void)
{
	int	arr1[5] = {10, 20, 30, 40, 50};
	int	main_size;

	main_size = 5;
	ft_rev_int_tab(arr1, main_size);
	printf ("%d ", arr1[0]);
	printf ("%d ", arr1[1]);
	printf ("%d ", arr1[2]);

}