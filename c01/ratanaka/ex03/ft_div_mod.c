/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratanaka <ratanaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 12:07:24 by ratanaka          #+#    #+#             */
/*   Updated: 2024/08/28 11:39:04 by ratanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{
    int a = 10;
    int b = 5;
    int div, mod;

    // Chama a função ft_div_mod
    ft_div_mod(a, b, &div, &mod);

    // Imprime os resultados
    printf("Divisão: %d / %d = %d\n", a, b, div);
    printf("Módulo: %d %% %d = %d\n", a, b, mod);

    return 0;
}*/
