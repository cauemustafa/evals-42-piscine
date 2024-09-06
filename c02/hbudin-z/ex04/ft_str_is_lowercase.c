/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbudin-z <hbudin-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:56:05 by hbudin-z          #+#    #+#             */
/*   Updated: 2024/09/06 01:18:25 by hbudin-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}

/*int main()
{
    char str1[] = "hellopeoples";
    char str2[] = "Hello, peoples!";

    printf("String 1 is lowercase: %d\n", ft_str_is_lowercase(str1));
    printf("String 2 is lowercase: %d\n", ft_str_is_lowercase(str2));

    return 0;
}*/
