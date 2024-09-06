/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 08:23:03 by gugomes-          #+#    #+#             */
/*   Updated: 2024/09/02 17:17:11 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	unsigned int	n;
	char s1[] = "Hello";
	char s2[] = "Hello, World!";

	char s3[] = "cavalo";
	char s4[] = "cavala";


	char s5[] = "sagui";
	char s6[] = "sagu";
	n = 6;

	int	i;
	i = ft_strncmp(s1, s2, n);
	printf("%d\n", i);
        i = ft_strncmp(s3, s4, n);
        printf("%d\n", i);
        i = ft_strncmp(s5, s6, n);
        printf("%d\n", i);
}
