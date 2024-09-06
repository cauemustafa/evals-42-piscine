/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadias-d <gadias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:54:38 by gadias-d          #+#    #+#             */
/*   Updated: 2024/09/01 14:57:03 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

#include <stdio.h>
#include <bsd/string.h>
int main(void)
{
	char dest[] = "gabi";
	char src[] = "world!";
	char dest1[] = "gabi";
	printf("meu: %s\n", ft_strncat(dest, src, 3));
	printf("original: %s\n", strncat(dest1, src, 3));
	return 0;
}
