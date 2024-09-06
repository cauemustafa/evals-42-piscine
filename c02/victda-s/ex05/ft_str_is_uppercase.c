/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:10:14 by victda-s          #+#    #+#             */
/*   Updated: 2024/08/28 23:44:18 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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

	teste = "AAAYUYUYGVYTaCCTTVYCTCY";
	retorno = ft_str_is_uppercase(teste);
	printf("Retornou: %d", retorno);
}

