/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbudin-z <hbudin-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:33:51 by hbudin-z          #+#    #+#             */
/*   Updated: 2024/09/05 22:56:21 by hbudin-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*dest_origin;

	dest_origin = dest;
	while (0 < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (dest);
}
/*int	main()
{
	char	dest1[11];
	char	dest2[6];
	char	src1[] = "Ola, mundo";
	char	src2[] = "abcde";

	ft_strncpy(dest1, src1, 5);
	ft_strncpy(dest2, src2, 5);
	printf("dest1: %s\n", dest1);
	printf("dest2: %s\n", dest2);
	return 0;
}*/
