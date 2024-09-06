/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:55:44 by lukorman          #+#    #+#             */
/*   Updated: 2024/09/06 01:53:31 by lukorman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	n;
	char	convert;

	convert = '0';
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			nb = -(nb + 1);
			convert = '1';
		}
		else
			nb = -nb;
		write(1, "-", 1);
	}
	if (nb == 0)
		write(1, "0", 1);
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	n = (nb % 10) + convert;
	write (1, &n, 1);
}
