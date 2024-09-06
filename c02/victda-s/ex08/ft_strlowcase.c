/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:03:58 by victda-s          #+#    #+#             */
/*   Updated: 2024/08/28 23:46:44 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;
	int	ascii;

	i = 0;
	while (str[i] != '\0')
	{
		ascii = (int) str[i];
		if (ascii > 64 && ascii < 91)
		{
		ascii = ascii + 32;
		str[i] = (char) ascii;
		}
		i++;
	}
	return (str);
}


#include <stdio.h>
int main(void)
{
	char teste[] = "hELLo, wORld! A-Z";
	ft_strlowcase(teste);
	for(int i=0; teste[i] != '\0'; i++)
		printf("%c", teste[i]);
	return (0);
}

