/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 23:34:02 by victda-s          #+#    #+#             */
/*   Updated: 2024/08/28 23:48:27 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	lenght;
	int	i;

	i = 0;
	lenght = 0;
	while (src[lenght] != '\0')
		lenght++;
	while (i <= size)
	{
		if (i >= lenght || i == size)
			dest[i] = '\0';
		else
			dest[i] = src[i];
		i++;
	}
	return (lenght);
}

#include <stdio.h>
int main()
{
	char source[] = "teste";
	char dest[10];
	int n = 4;

	ft_strlcpy(dest, source, n);
	printf("%s", dest);
}

