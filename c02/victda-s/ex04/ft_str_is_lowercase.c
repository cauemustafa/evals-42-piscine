/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:02:14 by victda-s          #+#    #+#             */
/*   Updated: 2024/08/28 23:42:22 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	char	*teste;
	int retorno;

	teste = "aaaaaaaaaaaaaaaaaaaaaaaaaaaa0safdasdgfdsfgrthbtrjhrfdghytjd";
	retorno = ft_str_is_lowercase(teste);
	printf("Retornou: %d", retorno);
}

