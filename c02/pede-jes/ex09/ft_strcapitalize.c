/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:02:22 by pede-jes          #+#    #+#             */
/*   Updated: 2024/09/04 02:45:10 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	aux;
	int	cont;

	cont = 0;
	i = 0;
	aux = 1;
	while (str[i] != '\0')
	{
		if (str[i] == 32 || str[i] == 45 || str[i] == 43)
		{
			aux = 1;
			i++;
		}
		if (aux)
		{
			if (str[i] > 96 && str[i] < 123)
				str[i] = str[i] - 32;
		}
		aux = 0;
		i++;
	}
	return (str);
}
 #include <stdio.h>

 char	*ft_strcapitalize(char *str);

 int	main(void)
 {
 	char	a[] = "pedro henirque+de -jesus barbosa";

 	printf("%s",ft_strcapitalize(a));
 }
