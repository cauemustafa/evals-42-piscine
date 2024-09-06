/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joscosta <joscosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:08:04 by joscosta          #+#    #+#             */
/*   Updated: 2024/08/29 14:57:54 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "1234567890";
	str2 = "1234abc";
	printf("'%s' é numero? %d\n", str1, ft_str_is_numeric(str1));
	printf("'%s' é numero? %d\n", str2, ft_str_is_numeric(str2));
	return (0);
}

