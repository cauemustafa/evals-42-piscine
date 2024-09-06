/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <cassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:19:11 by fforte-j          #+#    #+#             */
/*   Updated: 2024/09/05 23:15:06 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*addr;
	char	*search;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		addr = str;
		search = to_find;
		while (*str && *search && *str == *search)
		{
			str++;
			search++;
		}
		if (*search == '\0')
			return (addr);
		str = addr + 1;
	}
	return (0);
}

int main(void)
{
    // Test 1: Simple match
    char test1[] = "hello world";
    char find1[] = "h";
    printf("ft_strstr: %s\n", ft_strstr(test1, find1));
    return 0;
}
