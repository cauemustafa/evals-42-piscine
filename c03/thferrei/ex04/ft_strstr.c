/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thferrei <thferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 22:31:31 by thferrei          #+#    #+#             */
/*   Updated: 2024/08/28 19:26:54 by thferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	compare(char *str, char *to_find, int str_pos)
{
	int	i_find;

	i_find = 0;
	while (str[str_pos] == to_find[i_find] && to_find[i_find] && str[str_pos])
	{
		str_pos++;
		i_find++;
	}
	if (to_find[i_find] == '\0')
		return (1);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i_str;
	char	*res;

	if (to_find[0] != '\0')
	{
		i_str = 0;
		while (str[i_str] != '\0')
		{
			if (str[i_str] == to_find[0])
			{
				res = &str[i_str];
				if (compare(str, to_find, i_str))
					return (res);
			}
			i_str++;
		}
	}
	return ((void *)0);
}
