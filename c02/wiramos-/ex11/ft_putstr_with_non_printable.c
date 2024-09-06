/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_with_non_printable.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiramos- <wiramos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:50:52 by wiramos-          #+#    #+#             */
/*   Updated: 2024/08/21 22:31:29 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_putchar(hex[(unsigned char)str[i] / 16]);
			ft_putchar(hex[(unsigned char)str[i] % 16]);
		}
		i++;
	}
}

#include <stdio.h>

void ft_putstr_non_printable(char *str);

int main(void)
{
    // Exemplo 1: String com caracteres imprimíveis
    char str1[] = "Hello, World!";
    printf("Original: %s\nConverted: ", str1);
    ft_putstr_non_printable(str1);
    printf("\n\n");

    // Exemplo 2: String com caractere não imprimível no início
    char str2[] = "\aHello, World!";
    printf("Original: %s\nConverted: ", str2);
    ft_putstr_non_printable(str2);
    printf("\n\n");

    // Exemplo 3: String com caractere não imprimível no meio
    char str3[] = "Hello,\nWorld!";
    printf("Original: %s\nConverted: ", str3);
    ft_putstr_non_printable(str3);
    printf("\n\n");

    // Exemplo 4: String com caracteres não imprimíveis no fim
    char str4[] = "Hello, World!\t";
    printf("Original: %s\nConverted: ", str4);
    ft_putstr_non_printable(str4);
    printf("\n\n");

    // Exemplo 5: String com vários caracteres não imprimíveis
    char str5[] = "Oi\nvoce\testa\fbem?";
    printf("Original: %s\nConverted: ", str5);
    ft_putstr_non_printable(str5);
    printf("\n\n");

    // Exemplo 6: String totalmente não imprimível
    char str6[] = "\x01\x02\x03\x04";
    printf("Original: %s\nConverted: ", str6);
    ft_putstr_non_printable(str6);
    printf("\n\n");

    // Exemplo 7: String vazia
    char str7[] = "";
    printf("Original: %s\nConverted: ", str7);
    ft_putstr_non_printable(str7);
    printf("\n");

    return 0;
}
