/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thferrei <thferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 07:53:51 by thferrei          #+#    #+#             */
/*   Updated: 2024/08/28 19:43:04 by thferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	str_len(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_count;
	unsigned int	src_size;
	unsigned int	count;

	count = 0;
	src_size = str_len(src);
	dest_count = str_len(dest);
	if (size <= dest_count)
		return (src_size + size);
	while (dest_count < (size - 1) && src[count])
	{
		dest[dest_count] = src[count];
		count++;
		dest_count++;
	}
	dest[dest_count] = '\0';
	return (str_len(dest));
}
