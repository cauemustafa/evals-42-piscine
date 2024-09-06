/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <cassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:33:07 by fforte-j          #+#    #+#             */
/*   Updated: 2024/09/05 21:34:24 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	while (src[src_len])
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (src[i] && dest_len + i + 1 < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

#include <stdio.h>
#include <string.h>
/* 
int main(void)
{
    char test_ft[50] = "Hello";
    char source_ft[] = "";
    unsigned int size = 2;

    printf("src %zu\n", strlen(test_ft) + strlen(source_ft));
    printf("src %s \n", test_ft);
    printf("ft %zu \n", ft_strlcat(test_ft, source_ft, size));
    printf("ft %s \n\n", test_ft);

    // Test 1: Concatenate an empty string with "World"
    char test_ft1[50] = "";
    char source_ft1[] = "World";
    unsigned int size1 = 10;

    printf("Test 1:\n");
    printf("src %zu\n", strlen(test_ft1) + strlen(source_ft1));
    printf("ft %zu \n", ft_strlcat(test_ft1, source_ft1, size1));
    printf("ft %s \n", test_ft1);

    return 0;
}
 */