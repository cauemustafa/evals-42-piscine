/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiramos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:00:48 by wiramos-          #+#    #+#             */
/*   Updated: 2024/08/21 21:02:25 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
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

int     main(void)
{
        char src[] = "Hello world!";
        char dest[20];

        ft_strncpy(dest, src, 7);
        printf("o resultado é: %s\n", dest);

        ft_strncpy(dest, src, 15);
        printf("o resultado é: %s\n", dest);

        return (0);
}

