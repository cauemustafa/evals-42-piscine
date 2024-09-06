/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:13:43 by fforte-j          #+#    #+#             */
/*   Updated: 2024/08/29 15:28:56 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] != '\0' || s2[count] != '\0')
	{
		if (s1[count] < s2[count])
			return (s1[count] - s2[count]);
		else if (s1[count] > s2[count])
			return (s1[count] - s2[count]);
		count++;
	}
	return (0);
}
// #include<stdio.h>
// #include<string.h>
// int	main(void)
// {
// 	char test1[] = "string";
// 	char test2[] = "sring";
// 	printf("%d", ft_strcmp(test1, test2));
// 	printf("\n%d", strcmp(test1, test2));
// 	return (0);
// }