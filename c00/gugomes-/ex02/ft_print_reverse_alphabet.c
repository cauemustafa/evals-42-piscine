/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:07:44 by gugomes-          #+#    #+#             */
/*   Updated: 2024/08/15 12:10:56 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "unistd.h"

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 122;
	while (i > 9)
	{
		write(1, &i, 1);
		i--;
	}
}
