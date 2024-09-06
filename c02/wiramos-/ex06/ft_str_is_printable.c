/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiramos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:16:46 by wiramos-          #+#    #+#             */
/*   Updated: 2024/08/21 21:33:12 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		else
		{
			i++;
		}
	}
	return (1);
}

#include <stdio.h>

int     main(void)
{
            char *str1 = "Hello, World!";
    char *str2 = "Hello\nWorld";
    char *str3 = "1234567890";
    char *str4 = "\t";
    char *str5 = " ";
	char *str6 = "	";

    printf("Test 1: %s -> %d\n", str1, ft_str_is_printable(str1)); // Espera-se 1
    printf("Test 2: %s -> %d\n", str2, ft_str_is_printable(str2)); // Espera-se 0
    printf("Test 3: %s -> %d\n", str3, ft_str_is_printable(str3)); // Espera-se 1
    printf("Test 4: string tab -> %d\n", ft_str_is_printable(str4)); // Espera-se 0
    printf("Test 5: string vazia -> %d\n", ft_str_is_printable(str5)); // Espera-se 1
	printf("Test 6: string tab -> %d\n", ft_str_is_printable(str6)); // Espera-se 0
	printf("test7: %d\n", ft_str_is_printable("ola	ola"));
	printf("ola	ola");
}
