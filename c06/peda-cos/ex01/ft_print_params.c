/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:17:32 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/03 23:40:57 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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

int	main(int argc, char **argv)
{
	int	x;

	(void)argc;
	(void)argv;
	x = 1;
	printf("%i", argc);
	while (x < argc)
	{
		ft_putstr(argv[x]);
		x++;
	}
	return (0);
}
