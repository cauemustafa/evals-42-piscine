/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhenriqu <lhenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:14:37 by lhenriqu          #+#    #+#             */
/*   Updated: 2024/08/29 17:55:48 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	upper_case(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - ('a' - 'A');
}

void	lower_case(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c = *c + ('a' - 'A');
}

int	my_isalpha(char c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	*first;

	i = 0;
	while (str[i] != '\0')
	{
		if (!my_isalpha(str[i]))
		{
			first = &str[i + 1];
			upper_case(first);
			if (my_isalpha(*first))
				i++;
		}
		else
		{
			if (!i)
				upper_case(str);
			else
				lower_case(&str[i]);
		}
		i++;
	}
	return (str);
}

 int	main(void)
 {
 	char	t[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

 	ft_strcapitalize(t);
 	printf("%s", t);
 }
