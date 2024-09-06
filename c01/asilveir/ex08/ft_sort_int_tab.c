/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 20:13:30 by asilveir          #+#    #+#             */
/*   Updated: 2024/08/29 22:53:09 by asilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	swapped;

	i = 0;
	while (size > 1)
	{
		i = 0;
		swapped = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i +1];
				tab[i + 1] = temp;
				swapped = 1;
			}
			i++;
		}
		size--;
		if (!swapped)
			break ;
	}
}

/*int	main()
{
	int	array[] = {0,5,6,2,1,8,3,4};
	int	size = sizeof(array) / sizeof(array[0]);
	int	i = 0;
	
	ft_sort_int_tab(array, size);
	while (i < size)
	{
		printf("%d", array[i]);
		i++;
	}

	return (0);
}*/
