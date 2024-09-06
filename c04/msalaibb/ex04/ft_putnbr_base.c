/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalaibb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:07:59 by msalaibb          #+#    #+#             */
/*   Updated: 2024/09/03 23:23:32 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base)
{
	static int	l = 0;
	static int	t = 0;
	int			j;

	if (t == 0 && nbr == 0)
		write(1, "0", 1);
	while (t == 0 && base[++l] != '\0')
	{
		j = l + 1;
		if (base[l] == '-' || base[l] == '+' || base[l] < 32 || base[l] == 127)
			return ;
		while (base[++j] != '\0')
			if (base[j] == base[l])
				return ;
	}
	if (l == 1)
		return ;
	if (t++ == 0 && nbr < 0)
		write(1, "-", 1);
	if (nbr > 0)
		nbr *= -1;
	if (nbr != 0)
		ft_putnbr_base((nbr / l), base);
	if (nbr != 0)
		write(1, &base[(nbr % l) * -1], 1);
}

int main(void)
{
	ft_putnbr_base(10, "0123456789ABCDEF");
	return (0);
}
