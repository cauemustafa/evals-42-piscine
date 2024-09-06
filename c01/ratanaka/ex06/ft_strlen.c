/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratanaka <ratanaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:57:18 by ratanaka          #+#    #+#             */
/*   Updated: 2024/08/26 16:40:15 by ratanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	numb;

	numb = 0;
	while (*str != '\0')
	{
		str ++;
		numb ++;
	}
	return (numb);
}

/*int	main(void)
{
	char str[] = "Jorgin ";
	printf("quantidade de caracteres: %d", ft_strlen(str));
	return (0);
}*/
