/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:59:11 by victda-s          #+#    #+#             */
/*   Updated: 2024/08/28 23:46:01 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;
	int	ascii;

	i = 0;
	while (str[i] != '\0')
	{
		ascii = (int) str[i];
		if (ascii > 96 && ascii < 123)
		{
			ascii = ascii - 32;
			str[i] = (char) ascii;
		}
		i++;
	}
	return (str);
}


#include <stdio.h>
int main(void)
{
 char teste[] = "teste Teste";
 ft_strupcase(teste);
 printf("%s", teste);
}

