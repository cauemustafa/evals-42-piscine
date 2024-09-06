/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhenriqu <lhenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:10:06 by lhenriqu          #+#    #+#             */
/*   Updated: 2024/08/29 18:01:41 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	my_isprint( char c)
{
	if (c >= ' ' && c <= 126)
		return (1);
	return (0);
}

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (my_isprint(*str))
		{
			my_putchar(*str);
		}
		else
		{
			my_putchar('\\');
			my_putchar("0123456789abcdef"[(unsigned char)*str / 16]);
			my_putchar("0123456789abcdef"[(unsigned char)*str % 16]);
		}
		str++;
	}
}

 int	main(void)
 {
 	char	testStr[] = "abc|\n|test|\t|\xff|";

 	ft_putstr_non_printable(testStr);
 	return (0);
 }
