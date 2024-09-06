/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadias-d <gadias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:36:41 by gadias-d          #+#    #+#             */
/*   Updated: 2024/09/01 14:54:43 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
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
     char dest[] = "Hello, ";
     char src[] = "world!";
 	char dest1[] = "Hello, ";

     printf("minha: %s\n", ft_strcat(dest, src));
 	printf("original: %s\n", strcat(dest1, src));
     return 0;
 }
