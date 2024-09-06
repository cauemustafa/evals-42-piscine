/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbudin-z <hbudin-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:42:03 by hbudin-z          #+#    #+#             */
/*   Updated: 2024/09/05 22:56:11 by hbudin-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}

/*#include <stdio.h>
int main() 
{
    char str1[] = "HelloPeoples";
    char str3[] = "Hello, Peoples!422";

    printf("String 1 is alphabetic: %d\n", ft_str_is_alpha(str1));
    printf("String 3 is alphabetic: %d\n", ft_str_is_alpha(str3));

    return 0;
}*/