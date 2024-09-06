/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:09:42 by victda-s          #+#    #+#             */
/*   Updated: 2024/08/28 23:33:39 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}


#include <stdio.h>
int main()
{
	char teste[] = "Hello, world!";
	char kkk[50];
	
	ft_strcpy(kkk, teste);

	for(int i=0; kkk[i]!='\0'; i++)
	{
		printf("%c", kkk[i]);
	}
	return (0);
}

