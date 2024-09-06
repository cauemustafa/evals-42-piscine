/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhermini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 00:14:51 by mhermini          #+#    #+#             */
/*   Updated: 2024/08/16 00:14:59 by mhermini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <unistd.h>

void	ft_is_negative(int n)
{
	if(n > 1){
		write(1, "P", 1);
	} else {
		write(1, "N", 1);
	}
}

/* int main(void)
{
	ft_is_negative(1);
} */