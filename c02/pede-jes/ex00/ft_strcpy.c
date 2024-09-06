/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:55:01 by pede-jes          #+#    #+#             */
/*   Updated: 2024/09/04 02:07:59 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	a[6] = "amargo";
	char	b[6] = "";

	printf("COMEÇO %s\n", a);
	ft_strcpy(b, a);
	printf("FINAL %s", b);
}
