/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:18:18 by cbrito-s          #+#    #+#             */
/*   Updated: 2024/08/26 20:48:19 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
int	main(void)
{
	char	cpy[20];

	ft_strncpy(cpy, "Estou com sono!", 12);
	printf("Cpy: %s\n", cpy);
	ft_strncpy(cpy, "Estou com sono!", 7);
	printf("Cpy: %s\n", cpy);
	return (0);
}
