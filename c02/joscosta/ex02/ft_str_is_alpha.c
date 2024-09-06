/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joscosta <joscosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:07:59 by joscosta          #+#    #+#             */
/*   Updated: 2024/08/29 14:56:12 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "HelloWorld";
	str2 = "Hello42SP";
	printf("'%s' é do alfabeto? %d\n", str1, ft_str_is_alpha(str1));
	printf("'%s' é do alfabeto? %d\n", str2, ft_str_is_alpha(str2));
	return (0);
}

