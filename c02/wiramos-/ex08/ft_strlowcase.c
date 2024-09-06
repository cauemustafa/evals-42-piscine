/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiramos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:38:21 by wiramos-          #+#    #+#             */
/*   Updated: 2024/08/21 21:46:34 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 'A') && (str[c] <= 'Z'))
			str[c] += 'a' - 'A';
		c++;
	}
	return (str);
}



#include <stdio.h>
int    main(void)
{
     char test1[] = "SJ KAG	HDAiSJ=KH#x\%#DAJKSHD";
     printf("Before: %s\n", test1);
     printf("After: %s\n", ft_strlowcase(test1));
}
