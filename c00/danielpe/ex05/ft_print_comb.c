/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:53:01 by danielpe          #+#    #+#             */
/*   Updated: 2024/08/26 19:04:11 by danielpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print(char n1, char n2, char n3)
{
    write(1, &n1, 1);
    write(1, &n2, 1);
    write(1, &n3, 1);
    if (n1 != '7' || n2 != '8' || n3 != '9')
    {
        write(1, ", ", 2);
    }
}

void ft_print_comb(void)
{
    char n1 = '0';
    char n2;
    char n3;

    while (n1 <= '7')
    {
        n2 = n1 + 1;
        while (n2 <= '8')
        {
            n3 = n2 + 1;
            while (n3 <= '9')
            {
                ft_print(n1, n2, n3);
                n3++;
            }
            n2++;
        }
        n1++;
    }
}
/*
int main ()
{
    ft_print_comb();
    return (0);
}
*/
