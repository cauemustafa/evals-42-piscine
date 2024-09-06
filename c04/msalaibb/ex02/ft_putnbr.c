/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalaibb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:44:27 by msalaibb          #+#    #+#             */
/*   Updated: 2024/09/03 23:02:16 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	char	c[11];
	int		i;

	c[0] = '-';
	if (nb >= 0)
	{
		c[0] = 'T';
		nb *= -1;
	}
	i = 10;
	while (i > 0)
	{
		if (nb < 0 || (i == 10 && nb == 0))
			c[i] = ((nb % 10) - '0') * -1;
		else
			c[i] = 'T';
		nb /= 10;
		i--;
	}
	while (i < 11)
	{
		if (c[i] != 'T')
			write(1, &c[i], 1);
		i++;
	}
}

int main(void)
{
    ft_putnbr(394623468);
}