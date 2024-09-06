/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joscosta <joscosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:08:00 by joscosta          #+#    #+#             */
/*   Updated: 2024/08/29 14:55:16 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	dest[50];
	char	*src;

	src = "Hello, 42SP!";
	printf("Fonte: %s\n", src);
	ft_strncpy(dest, src, 5);
	dest[5] = '\0';
	printf("Destino após usar a função (n = 5): %s\n", dest);
	ft_strncpy(dest, src, 50);
	printf("Detino após usar a função (n = 50): %s\n", dest);
	return (0);
}

