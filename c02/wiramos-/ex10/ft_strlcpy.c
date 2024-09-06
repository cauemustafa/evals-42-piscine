/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiramos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:20:19 by wiramos-          #+#    #+#             */
/*   Updated: 2024/08/21 22:23:18 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_length;

	i = 0;
	src_length = 0;
	while (src[src_length])
	{
		src_length++;
	}
	if (size > 0)
	{
		while (i < (size - 1) && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_length);
}

#include <stdio.h>
#include <string.h> // Para comparação com a função strlcpy original

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
    char dest[20]; // Buffer de destino
    char *src = "Hello, World!";
    unsigned int size;
    unsigned int result;

    // Caso 1: size = 0, nada deve ser copiado
    size = 0;
    result = ft_strlcpy(dest, src, size);
    printf("Test 1:\n");
    printf("Expected length: %lu, Actual length: %u\n", strlen(src), result);
    printf("Destination after copy: \"%s\"\n\n", dest);

    // Caso 2: size maior que o comprimento da src, deve copiar a string inteira
    size = 20;
    result = ft_strlcpy(dest, src, size);
    printf("Test 2:\n");
    printf("Expected length: %lu, Actual length: %u\n", strlen(src), result);
    printf("Destination after copy: \"%s\"\n\n", dest);

    // Caso 3: size menor que o comprimento da src, deve truncar a string
    size = 6;
    result = ft_strlcpy(dest, src, size);
    printf("Test 3:\n");
    printf("Expected length: %lu, Actual length: %u\n", strlen(src), result);
    printf("Destination after copy: \"%s\"\n\n", dest);

    // Caso 4: size igual ao comprimento da src + 1, deve copiar a string inteira
    size = 14;
    result = ft_strlcpy(dest, src, size);
    printf("Test 4:\n");
    printf("Expected length: %lu, Actual length: %u\n", strlen(src), result);
    printf("Destination after copy: \"%s\"\n\n", dest);

    // Caso 5: size = 1, deve apenas adicionar '\0'
    size = 7;
    result = ft_strlcpy(dest, src, size);
    printf("Test 5:\n");
    printf("Expected length: %lu, Actual length: %u\n", strlen(src), result);
    printf("Destination after copy: \"%s\"\n\n", dest);

    return 0;
}

