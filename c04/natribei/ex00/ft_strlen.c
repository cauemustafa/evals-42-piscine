/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <natribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 01:15:47 by natribei          #+#    #+#             */
/*   Updated: 2024/09/05 23:39:29 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		index++;
	}
	return (index);
}
/* #include <stdio.h>
int	main(void)
{
	char	*r = "pineapple";
	printf("%d", ft_strlen(r));
	return(0);
}*/
