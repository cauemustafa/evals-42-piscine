/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:43 by fforte-j          #+#    #+#             */
/*   Updated: 2024/08/28 20:55:52 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	d;

	i = 0;
	d = 0;
	while (dest[i] != '\0')
		i++;
	while (d < nb && src[d] != '\0')
	{
		dest[i] = src[d];
		i++;
		d++;
	}
	dest[i] = '\0';
	return (dest);
}
// #include<stdio.h>
// int	main(void)
// {
// 	char	destination[50] = "join ";
// 	char	source[] = "strings";
// 	unsigned int size = 2;
// 	printf("%s", ft_strncat(destination, source, size));
// 	return (0);
// }
