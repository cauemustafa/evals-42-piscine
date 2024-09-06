/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalaibb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:20:22 by msalaibb          #+#    #+#             */
/*   Updated: 2024/08/29 15:25:52 by msalaibb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}
/*
#include <stdio.h>
int main(void)
{
    char *c = "Testando";
    printf("Numero de caracteres %d", ft_strlen(c));
    return (0);
}
*/
