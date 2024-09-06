/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhenriqu <lhenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 08:56:06 by lhenriqu          #+#    #+#             */
/*   Updated: 2024/08/29 17:32:59 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

int	main(void)
{
	char	*str1;
	char	str2[12] = "aaaaaaaaaaaa";
	char	*str3;

	str3 = "----";
	str1 = "TESTANDO";
	ft_strcpy(str2, str1);
	printf("%s\n", str2);
	ft_strcpy(str2, str3);
	printf("%s\n", str2);
}

