/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:43:44 by victda-s          #+#    #+#             */
/*   Updated: 2024/08/28 23:37:49 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	lenght;
	int	i;

	i = 0;
	lenght = 0;
	while (src[lenght] != '\0')
		lenght++;
	while (i < (int)n)
	{
		if (i >= lenght)
			dest[i] = '\0';
		else
			dest[i] = src[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>
int main(void)
{
 char *teste = "Hello, World!";
 char kkk[50];
 int n;

 n = 25;
 ft_strncpy(kkk, teste, n);
 
 for(int i = 0; i <= n; i++)
 {
 printf("%c", kkk[i]);
 }
}

