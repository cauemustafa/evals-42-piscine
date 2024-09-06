/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:23:43 by pede-jes          #+#    #+#             */
/*   Updated: 2024/09/04 02:46:33 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (src[i] != '\0')
	{
		while (src[i] != '\0' && i < size)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
 #include <stdio.h>
 #include <unistd.h>

 unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

 int	main(void)
 {
 	char			a[6] = "amargo";
 	char			b[] = "vhjdvsahkvdhskavhdksad";
 	unsigned int	n;

 	n = 6;
 	printf("COMEÇO %s\n", a);
 	printf("FINAL %u\n", ft_strlcpy(b, a, 2));
 	printf("COMEÇO %s\n", b);
 }
