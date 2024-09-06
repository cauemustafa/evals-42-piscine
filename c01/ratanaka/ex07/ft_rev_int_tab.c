/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratanaka <ratanaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:54:53 by ratanaka          #+#    #+#             */
/*   Updated: 2024/08/27 10:50:22 by ratanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	vazio;
	int	first_numb;
	int	last_numb;

	last_numb = (size - 1);
	first_numb = 0;
	while (first_numb < last_numb)
	{
		vazio = tab[first_numb];
		tab[first_numb] = tab[last_numb];
		tab[last_numb] = vazio;
		first_numb++;
		last_numb--;
	}
}
/*
int	main(void)
{
	int i = 0;
	int jorge[5] = {1, 2, 3, 4, 5};
	printf("Antes da troca: \n");
	while (i < 5) 
	{
		printf("%d ", jorge[i]);
		i++;
	}
	i = 0;
	printf("\nDepois da troca: \n");
	ft_rev_int_tab(jorge, 5);
	while (i < 5) 
	{
		printf("%d ", jorge[i]);
		i++;
	}
	return (0);
}
*/
