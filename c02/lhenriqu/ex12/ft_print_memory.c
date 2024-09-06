/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhenriqu <lhenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:11:28 by lhenriqu          #+#    #+#             */
/*   Updated: 2024/08/29 18:12:16 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	put_hex(void *ptr, char *buffer, int size)
{
	unsigned char	*c;
	char			*init;
	int				count;
	int				j;

	j = 0;
	count = 0;
	init = &buffer[18];
	c = (unsigned char *)ptr;
	if (*c >= 255)
		c = 0;
	while (j < 48 && size)
	{
		init[j] = "0123456789abcdef"[*c >> 4];
		init[j + 1] = "0123456789abcdef"[*c % 16];
		j = j + 2;
		c++;
		if (++count == 2)
		{
			j++;
			count = 0;
		}
		size--;
	}
}

void	put_string(void *ptr, int n, char *buffer)
{
	int		i;
	char	*c;
	char	*init;

	i = 0;
	c = (char *)ptr;
	init = &buffer[58];
	while (i < n)
	{
		if (*c >= ' ' && *c <= 127)
		{
			init[i] = *c;
		}
		else
		{
			init[i] = '.';
		}
		c++;
		i++;
	}
}

void	fill_buffer(char *buffer, int size, char c)
{
	int	i;

	i = 0;
	while (i < size)
	{
		buffer[i] = c;
		i++;
	}
	buffer[74] = '\n';
}

void	put_address(void *ptr, char *buffer)
{
	unsigned long	address;
	int				digit;
	int				pos;

	pos = 16;
	address = (unsigned long)ptr;
	while (address > 0)
	{
		digit = address % 16;
		if (digit < 10)
			buffer[--pos] = (digit + '0');
		else
			buffer[--pos] = (digit - 10 + 'a');
		address /= 16;
	}
	fill_buffer(buffer, 4, '0');
	buffer[16] = ':';
	buffer[17] = ' ';
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	buffer[75];
	int		times;
	char	*str;
	int		i;

	i = 0;
	str = (char *)addr;
	times = size / 16;
	if (size % 16 == 0)
		times--;
	while (0 <= times)
	{
		i = 16;
		if (times == 0 && size % 16 != 0)
			i = size % 16;
		fill_buffer(buffer, 74, ' ');
		put_address(str, buffer);
		put_hex(str, buffer, i);
		put_string(str, i, buffer);
		write(1, buffer, 75);
		str = str + 16;
		times--;
		i++;
	}
	return (addr);
}

 int	main(void)
 {
 	char	data[] = "Bonjour ";

 	ft_print_memory(data, 200);
 	return (0);
 }
