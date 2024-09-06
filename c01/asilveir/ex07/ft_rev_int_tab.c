/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 00:02:13 by asilveir          #+#    #+#             */
/*   Updated: 2024/08/31 22:59:15 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	end;

	end = size - 1;
	i = 0;
	while (end > i)
	{
		temp = tab[i];
		tab[i] = tab[end];
		tab[end] = temp;
		i++;
		end--;
	}
}

int	main()
{
	int array[] = {6,3,1,6,0};
	int size = sizeof(array) / sizeof(array[0]);
	int i = 0;

	ft_rev_int_tab(array, size);
	while(i < size)
	{
		printf("%d", array[i]);
		i++;
	}
	return (0);
}
