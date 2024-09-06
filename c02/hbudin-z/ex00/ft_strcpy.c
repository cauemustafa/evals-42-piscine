/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbudin-z <hbudin-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 02:14:17 by hbudin-z          #+#    #+#             */
/*   Updated: 2024/09/06 01:24:36 by hbudin-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0' )
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char *str_to_cpy;
	char *str_dest;

	char a[7] = "Cadete";
	char b[10] = "";

	str_to_cpy = a;
	str_dest = b;

	printf("\nAntes da copia - %s \n", str_dest);
	ft_strcpy(str_dest, str_to_cpy);
	printf("Depois da copia - %s \n-----------------\n", str_dest);
}*/
