/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadias-d <gadias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:56:47 by gadias-d          #+#    #+#             */
/*   Updated: 2024/09/01 15:01:12 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		k;
	char	*found;

	i = 0;
	j = 0;
	k = 0;
	found = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
			k = i;
		while (to_find[j] != '\0' && str[i] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[k]);
		i++;
	}
	return (0);
}

 #include <string.h>
 #include <bsd/stdio.h>
 int main(void)
 {
     char *haystack = "Hello, world! meu amor da minha vida";
     char *needle1 = "world";
     char *needle2 = "earth";
 	printf("meu: %s\n", ft_strstr(haystack, "minha"));
 	printf("meu: %s\n", ft_strstr(haystack, needle2));
 	printf("original: %s\n", strstr(haystack, "minha"));
 	printf("original: %s\n", strstr(haystack, needle2));

     return 0;
}
