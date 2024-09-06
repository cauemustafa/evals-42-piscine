/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreal-de <rreal-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 07:56:22 by rreal-de          #+#    #+#             */
/*   Updated: 2024/08/21 22:55:54 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void) {
    int num; // Variável para armazenar o valor
    printf("Valor antes: %d\n", num); // Valor indefinido (lixo)

    ft_ft(&num); // Chama a função passando o endereço de num

    printf("Valor depois: %d\n", num); // Deve imprimir 42

    return 0;
}
