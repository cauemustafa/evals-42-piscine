/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:41:54 by victda-s          #+#    #+#             */
/*   Updated: 2024/08/28 23:47:37 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 'A' && str[i] < 'Z')
		{
			str[i] += 32;
		}
		while (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0'
					&& str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'Z')))
		{
			flag = 1;
			i++;
		}
		if (flag != 0)
		{
			str[i] -= 32;
			flag = 0;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char teste[] = "$#*teste de a42aFuncionamento $a a ((**&))a quarenta-e-duas";
	ft_strcapitalize(teste);
	printf("%s", teste);
}

