/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:17:23 by gugomes-          #+#    #+#             */
/*   Updated: 2024/09/02 17:30:20 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*ptr;

	ptr = dest;
	i = 0;
	while (*ptr != '\0')
		ptr++;
	while (i < nb && src[i] != '\0')
	{
		*ptr++ = src[i];
		i++;
	}
	*ptr = '\0';
	return (dest);
}

int	main(void)
{
	char	s1[9] = "torta";
	char	s2[] = "fria";
	int	nb;

	nb = 50;
	ft_strncat(s1, s2, nb);

	write(1, s1, 9);
}
