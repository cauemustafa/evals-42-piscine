/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <cassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:34:59 by pede-jes          #+#    #+#             */
/*   Updated: 2024/09/04 02:21:40 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	cont;

	cont = 0;
	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] < 97 || str[i] > 122) && (str[i] < 65 || str[i] > 90))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
#include <stdio.h>
int	main(void)
{
	char	a[] = "aasdasSADASDS112ADASDADSdsa";
	printf("%d",ft_str_is_alpha(a));
}
