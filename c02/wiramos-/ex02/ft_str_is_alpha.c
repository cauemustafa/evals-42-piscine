/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiramos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:25:18 by wiramos-          #+#    #+#             */
/*   Updated: 2024/08/21 21:06:24 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			return (0);
		}
	i++;
	}
	return (1);
}

#include <stdio.h>

int ft_str_is_alpha(char *str);

int main()
{
    char str1[] = "HelloWorld";
    char str2[] = "Hello123";
    char str3[] = "";
    char str4[] = "Hello World";

    printf("str1: %d\n", ft_str_is_alpha(str1)); // Deve imprimir 1
    printf("str2: %d\n", ft_str_is_alpha(str2)); // Deve imprimir 0
    printf("str3: %d\n", ft_str_is_alpha(str3)); // Deve imprimir 1
    printf("str4: %d\n", ft_str_is_alpha(str4)); // Deve imprimir 0
    return (0);
}
