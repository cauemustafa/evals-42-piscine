/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:17:49 by fforte-j          #+#    #+#             */
/*   Updated: 2024/08/28 20:58:52 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n)
	{
		if (s1[count] == '\0' && s2[count] == '\0')
			return (0);
		if (s1[count] < s2[count])
			return (s1[count] - s2[count]);
		else if (s1[count] > s2[count])
			return (s1[count] - s2[count]);
		else if (s1[count] == s2[count])
			count++;
	}
	return (0);
}
// #include<stdio.h>
// int	main(void)
// {
// 	char test1[] = "sztring";
// 	char test2[] = "string";
// 	int size = 4;

// 	printf("%d", ft_strncmp(test1, test2, size));
// 	return (0);
// }
