/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratanaka <ratanaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:12:09 by ratanaka          #+#    #+#             */
/*   Updated: 2024/08/28 10:05:29 by ratanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	first_numb;
	int	last_numb;
	int	constnumb;
	int	sorted;

	first_numb = 0;
	last_numb = (size - 1);
	while (first_numb < last_numb)
	{
		sorted = 1;
		constnumb = 0;
		while (constnumb < last_numb)
		{
			if (tab[constnumb] > tab[constnumb + 1])
			{
				ft_swap(&tab[constnumb], &tab[constnumb +1]);
			sorted = 0;
			}
		constnumb++;
		}
		if (sorted)
			break ;
	first_numb++;
	}
}

/*int main() {
    int array[10] = {5, 3, 1, 4, 2, 8, 6, 9, 7, 10};
    int i;

    ft_sort_int_tab(array, 10);

    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}*/
