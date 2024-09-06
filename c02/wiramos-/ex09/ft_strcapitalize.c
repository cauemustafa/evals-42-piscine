/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiramos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:46:50 by wiramos-          #+#    #+#             */
/*   Updated: 2024/08/21 21:59:01 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_if_else(char *str, int *new_word, int *i)
{
	char	c;

	c = str[*i];
	if ((c >= 'a' && c <= 'z') && *new_word)
	{
		str[*i] -= 32;
		*new_word = 0;
	}
	else if ((c >= 'A' && c <= 'Z') && !(*new_word))
	{
		str[*i] += 32;
	}
	else if (!((c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9')))
	{
			*new_word = 1;
	}
	else
	{
			*new_word = 0;
	}
		(*i)++;
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		ft_if_else(str, &new_word, &i);
	}
	return (str);
}

#include <stdio.h>

int main(void)
{
    char str1[] = "hello, world! 42school 21ST century";
    char str2[] = "this is A test STRING.";
    char str3[] = "ANOTHER TEST, with DIFFERENT symbols!";

    printf("Before: %s\n", str1);
    ft_strcapitalize(str1);
    printf("After: %s\n", str1);

    printf("Before: %s\n", str2);
    ft_strcapitalize(str2);
    printf("After: %s\n", str2);

	printf("Before: %s\n", str3);
    ft_strcapitalize(str3);
    printf("After: %s\n", str3);
}
