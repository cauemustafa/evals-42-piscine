/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:28:03 by danielpe          #+#    #+#             */
/*   Updated: 2024/08/22 19:07:50 by danielpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)

{
	char	alphabet;

	alphabet = 'z';
	while (alphabet >= 'a')
	{
		write (1, &alphabet, 1);
		alphabet--;
	}	
}
