/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:33:41 by fforte-j          #+#    #+#             */
/*   Updated: 2024/09/05 21:02:35 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	d;

	i = 0;
	d = 0;
	while (dest[i] != '\0')
		i++;
	while (src[d] != '\0')
	{
		dest[i] = src[d];
		i++;
		d++;
	}
	dest[i] = '\0';
	return (dest);
}
 #include<stdio.h>
 int	main(void)
 {
 	char	destination[50] = "join ";
 	char	source[] = "strings";
 	printf("%s", ft_strcat(destination, source));
 	return (0);
 }
