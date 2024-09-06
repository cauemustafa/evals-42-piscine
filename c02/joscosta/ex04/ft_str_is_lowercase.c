/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joscosta <joscosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:08:06 by joscosta          #+#    #+#             */
/*   Updated: 2024/08/29 14:58:36 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "helloworld";
	str2 = "HelloWorld";
	printf("'%s' está em minúsculo? %d\n", str1, ft_str_is_lowercase(str1));
	printf("'%s' está em minúsculo? %d\n", str2, ft_str_is_lowercase(str2));
	return (0);
}

