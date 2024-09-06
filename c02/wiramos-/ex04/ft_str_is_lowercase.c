/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiramos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:25:08 by wiramos-          #+#    #+#             */
/*   Updated: 2024/08/21 21:13:01 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
        char *str1 = "hello";
    char *str2 = "Hello";
    char *str3 = "world";
    char *str4 = "123";
    char *str5 = "";

    printf("Test 1: %s -> %d\n", str1, ft_str_is_lowercase(str1)); // Espera-se 1
    printf("Test 2: %s -> %d\n", str2, ft_str_is_lowercase(str2)); // Espera-se 0
    printf("Test 3: %s -> %d\n", str3, ft_str_is_lowercase(str3)); // Espera-se 1
    printf("Test 4: %s -> %d\n", str4, ft_str_is_lowercase(str4)); // Espera-se 0
    printf("Test 5: string vazia -> %d\n", ft_str_is_lowercase(str5)); // Espera-se 1

    return (0);
}
