/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabo-ram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:45:08 by cabo-ram          #+#    #+#             */
/*   Updated: 2024/09/02 16:33:24 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((!(str[i] >= 32 && str[i] <= 126)))
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char **argv) {
	int n;

	if (argc < 2) return 1;
	n = ft_str_is_printable(argv[1]);
	printf("is printable? %i", n);
	return 0;
}

