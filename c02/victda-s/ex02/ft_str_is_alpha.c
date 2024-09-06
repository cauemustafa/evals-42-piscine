/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 22:03:56 by victda-s          #+#    #+#             */
/*   Updated: 2024/08/28 23:39:40 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<stdio.h> */
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' || (str[i] >= 'A' && str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	char	*teste;
	int retorno;

	teste = "RXDCFTVNHIJ22354frtcvyunijm";
	retorno = ft_str_is_alpha(teste);
	printf("Retornou: %d", retorno);
}

