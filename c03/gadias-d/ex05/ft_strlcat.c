/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadias-d <gadias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 12:38:08 by gadias-d          #+#    #+#             */
/*   Updated: 2024/09/01 15:08:56 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	k;

	dest_size = 0;
	src_size = 0;
	k = 0;
	while (dest[dest_size] != '\0')
		dest_size++;
	while (src[src_size] != '\0')
		src_size++;
	if (size == 1 || size < dest_size)
		return (src_size + size);
	while (src[k] != '\0' && k < size - dest_size - 1)
	{
		dest[dest_size + k] = src[k];
		k++;
	}
	dest[dest_size + k] = '\0';
	return (dest_size + src_size);
}

 #include <stdio.h>
 #include <bsd/string.h>
 int main (void)
 {
 	char dest[]="Born to code";
 	char dest1[]="Born to code";

 	char src[] = "king";
 	printf("meu: %d\n",ft_strlcat(dest, src,1));
 	printf("original: %zu", strlcat(dest1, src,1));
	return 0;
 }
