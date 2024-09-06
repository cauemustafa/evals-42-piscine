/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadias-d <gadias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:22:13 by gadias-d          #+#    #+#             */
/*   Updated: 2024/09/01 14:51:43 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] || s1[i])
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] < s2[i])
			return (-(s2[i] - s1[i]));
		i++;
	}
	return (0);
}

 #include <string.h>
 #include <stdio.h>
 int main (void)
 {
 	char *s1 ="gabi";
 	char *s2 = "gabi";
 	printf("original: %d\n", strcmp(s1,s2));
 	printf("minha: %d\n", ft_strcmp(s1,s2));
}
