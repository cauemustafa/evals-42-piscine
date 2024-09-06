/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratanaka <ratanaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:56:29 by ratanaka          #+#    #+#             */
/*   Updated: 2024/08/28 10:36:32 by ratanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int main()
{
	int x = 5;	// Primeira variável
	int y = 10; // Segunda variável

	// Mostra os valores antes da troca
	printf("Antes da troca: x = %d, y = %d\n", x, y);

	// Chama a função para trocar os valores
	ft_swap(&x, &y);

	// Mostra os valores depois da troca
	printf("Depois da troca: x = %d, y = %d\n", x, y);

	return 0;
}
*/
