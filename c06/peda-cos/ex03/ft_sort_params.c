/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:56:50 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/03 21:48:15 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (s1[x] - s2[x]);
}

void	ft_sort_in_tab(char **tab, int size)
{
	int		x;
	int		y;
	char	*temp;

	x = 1;
	while (x < size - 1)
	{
		y = x + 1;
		while (y < size)
		{
			if (ft_strcmp(tab[x], tab[y]) > 0)
			{
				temp = tab[x];
				tab[x] = tab[y];
				tab[y] = temp;
			}
			y++;
		}
		x++;
	}
}

int	main(int argc, char **argv)
{
	int	x;

	ft_sort_in_tab(argv, argc);
	x = 1;
	while (argv[x])
	{
		ft_putstr(argv[x]);
		x++;
	}
	return (0);
}
