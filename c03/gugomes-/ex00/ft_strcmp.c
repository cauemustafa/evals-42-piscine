/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:05:28 by gugomes-          #+#    #+#             */
/*   Updated: 2024/09/02 17:13:44 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(void)
{
	char	s1[] = "truta";
	char 	s2[] = "corvina";
	char    s3[] = "barrigudinho";
        char    s4[] = "merluza";
	char    s5[] = "au";
        char    s6[] = "au";
	char	c[2];
	int	i;
	write(1, "se s1 for maior que s2:_",23);	
	i = ft_strcmp(s3, s4);

	if(i < 0)
	{	write(1,"-",1);
		i = -i;
		c[0] = (i/10) + '0';
		c[1] = (i%10) + '0';
       		write(1, &c[0], 1);
	        write(1, &c[1], 1);

	}
	else
	{
		c[0] = (i/10) + '0';
                c[1] = (i%10) + '0';
		write(1, &c[0], 1);
                write(1, &c[1], 1);
	}

	write(1, "\n", 1);
	write(1, "se s2 for maior que s1:_",23);
	 i = ft_strcmp(s1, s2);

          if(i < 0)
        {       write(1,"-",1);
                i = -i;
                c[0] = (i/10) + '0';
                c[1] = (i%10) + '0';
                write(1, &c[0], 1);
                write(1, &c[1], 1);

        }
        else
	{
		c[0] = (i/10) + '0';
                c[1] = (i%10) + '0';
                write(1, &c[0], 1);
                write(1, &c[1], 1);

        }
	write(1, "\n", 1);
        i = ft_strcmp(s5, s6);
        write(1, "se s1 for igual a s2:_",22);
	if(i < 0)
        {       write(1,"-",1);
                i = -i;
                c[0] = (i/10) + '0';
                c[1] = (i%10) + '0';
                write(1, &c[0], 1);
                write(1, &c[1], 1);

        }
        else
	{
	 	c[0] = (i/10) + '0';
                c[1] = (i%10) + '0';
                write(1, &c[0], 1);
 	        write(1, &c[1], 1);
        }
}
