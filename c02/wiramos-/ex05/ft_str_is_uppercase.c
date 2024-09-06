/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiramos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:44:09 by wiramos-          #+#    #+#             */
/*   Updated: 2024/08/21 21:14:50 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)

{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

#include <stdio.h>

int     main(void)
{
        char *str1 = "ADFASFSDFGH";
        char *str2 = "osihdf1243as";
        char *str3 = "'\0'";

        printf("test1 %s -> %d\n", str1, ft_str_is_uppercase(str1));
        printf("test2 %s -> %d\n", str2, ft_str_is_uppercase(str2));
        printf("test3 %s -> %d\n", str3, ft_str_is_uppercase(str3));
}
