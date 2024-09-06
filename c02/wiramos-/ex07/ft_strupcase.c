/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiramos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:25:40 by wiramos-          #+#    #+#             */
/*   Updated: 2024/08/21 21:39:37 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 'a') && (str[c] <= 'z'))
			str[c] -= 'a' - 'A';
		c++;
	}
	return (str);
}

#include <stdio.h>

// Prototipo da função
char *ft_strupcase(char *str);

int main(void)
{
    // Strings originais
    char original1[] = "hello world!";
    char original2[] = "1234-abcdEFG";
    char original3[] = "";
    char original4[] = "Already-UPPERCASE";
    char original5[] = "MiXeD-Case 123";
    char original6[] = "-lowercase-after-dash";
    char original7[] = "with\ttabs and spaces";
    char original8[] = "1234567890";
    char original9[] = "UPPERCASE";
    char original10[] = "lowercase";

    // Cópias para teste
    char test1[] = "hello world!";
    char test2[] = "1234-abcdEFG";
    char test3[] = "";
    char test4[] = "Already-UPPERCASE";
    char test5[] = "MiXeD-Case 123";
    char test6[] = "-lowercase-after-dash";
    char test7[] = "with\ttabs and spaces";
    char test8[] = "1234567890";
    char test9[] = "UPPERCASE";
    char test10[] = "lowercase";

    // Exibindo as strings originais e as strings convertidas para maiúsculas
    printf("Original: %s | Uppercase: %s\n", original1, ft_strupcase(test1));
    printf("Original: %s | Uppercase: %s\n", original2, ft_strupcase(test2));
    printf("Original: %s | Uppercase: %s\n", original3, ft_strupcase(test3));
    printf("Original: %s | Uppercase: %s\n", original4, ft_strupcase(test4));
    printf("Original: %s | Uppercase: %s\n", original5, ft_strupcase(test5));
    printf("Original: %s | Uppercase: %s\n", original6, ft_strupcase(test6));
    printf("Original: %s | Uppercase: %s\n", original7, ft_strupcase(test7));
    printf("Original: %s | Uppercase: %s\n", original8, ft_strupcase(test8));
    printf("Original: %s | Uppercase: %s\n", original9, ft_strupcase(test9));
    printf("Original: %s | Uppercase: %s\n", original10, ft_strupcase(test10));

    return 0;
}

