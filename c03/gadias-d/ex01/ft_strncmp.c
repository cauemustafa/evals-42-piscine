/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadias-d <gadias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:31:39 by gadias-d          #+#    #+#             */
/*   Updated: 2024/09/01 14:53:24 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s2[i] || s1[i]) && i < n)
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
 	char *s2 = "gabihasdasd";
 	printf("original: %d\n", strncmp(s1,s2,4));
 	printf("minha: %d\n", ft_strncmp(s1,s2,4));
}
