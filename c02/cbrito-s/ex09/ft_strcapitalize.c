/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:51:26 by cbrito-s          #+#    #+#             */
/*   Updated: 2024/08/26 21:21:01 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && j == 0)
		{
			str[i] += -32;
			j++;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') && j > 0)
			str[i] += 32;
		else if (str[i] >= '0' && str[i] <= '9')
			j++;
		else if ((str[i] < 'A') || (str[i] > 'Z' && str[i] < 'a')
			|| (str[i] > 'z'))
			j = 0;
		i++;
	}
	return (str);
}
int	main(int argc, char **argv)
{
	char	*strg;

	if (argc != 2)
		return (0);

	strg = ft_strcapitalize(argv[1]);
	printf("%s\n", strg);
	return (0);
}
