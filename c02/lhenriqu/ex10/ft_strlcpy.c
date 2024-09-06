/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhenriqu <lhenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:17:53 by lhenriqu          #+#    #+#             */
/*   Updated: 2024/08/29 17:58:20 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (len);
}

 void	test(int size)
 {
 	char	string[] = "Hello there, Venus";
 	char	buffer[19];
 	int		r;

 	r = ft_strlcpy(buffer, string, size);
 	printf("Copied '%s' into '%s', length %d\n", string, buffer, r);
 }

 int	main(void)
 {
 	test(19);
 	test(18);
 	test(17);
 	test(16);
 	test(2);
 	test(1);
 	test(0);
 	return (0);
 }
