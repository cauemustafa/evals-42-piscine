/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabo-ram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:11:01 by cabo-ram          #+#    #+#             */
/*   Updated: 2024/09/02 17:04:32 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = 0;
	while (src[length] != '\0')
		length++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (length);
}

int main(int argc, char **argv)
{	
	char dest[100];
    unsigned int size;

    if (argc < 4)
    {
        printf("Usage: %s <dest> <src> <size>\n", argv[0]);
        return 1;
    }

    size = atoi(argv[3]);  // Convert the third argument to an unsigned int

    printf("The length of src is %u\n", ft_strlcpy(dest, argv[2], size));

    return 0;
}
