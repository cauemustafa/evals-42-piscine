/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabo-ram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:48:47 by cabo-ram          #+#    #+#             */
/*   Updated: 2024/09/02 16:50:04 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] -32;
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64)
			|| (str[i] >= 91 && str[i] <= 96)
			|| (str[i] >= 123 && str[i] <= 126))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i +1] = str[i + 1] - 32;
			}
		}
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main( void )
{
	char	str[] = "oi, tudo bEm? 42palAvras_quaRenta-e-duas; cinquenta+e+um";

	printf("Original string: %s\n", str);
	ft_strcapitalize(str);
	printf("Capitalize string: %s\n", str);
	return (0);
}
