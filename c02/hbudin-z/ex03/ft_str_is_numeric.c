/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbudin-z <hbudin-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:47:43 by hbudin-z          #+#    #+#             */
/*   Updated: 2024/09/05 22:56:04 by hbudin-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}

/*int main()
{
    char str1[] = "12345";
    char str2[] = "123a45";

    printf("String 1 is numeric: %d\n", ft_str_is_numeric(str1));
    printf("String 2 is numeric: %d\n", ft_str_is_numeric(str2));

    return 0;
}*/
