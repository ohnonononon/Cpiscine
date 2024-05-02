/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 11:42:55 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/02 17:46:24 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/* TEST SUITE
 
#include <string.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
void	test1()
{
	char	str1[]="123";
	char	str2[40];
	char	str3[40];

	ft_putstr("\n\n**** TEST 1 ****\ntest case - \"123\"\n\n");
	strcpy(str2,str1);
	ft_strcpy(str3,str1);
	ft_putstr("ORIGINAL STRING:");
	ft_putstr(str1);
	ft_putstr("\nOG:\n");
	ft_putstr(str2);
	ft_putstr("\nFT_STRCPY:\n");
	ft_putstr(str3);
	ft_putstr("\n\n");
}

void	test2()
{
	char	str1[]="";
	char	str2[40];
	char	str4[40];

	ft_putstr("**** TEST 2 ****\ntest case - \"\"\n\n");
	strcpy(str2,str1);
	ft_strcpy(str4,str1);
	ft_putstr("ORIGINAL STRING:");
	ft_putstr(str1);
	ft_putstr("\nOG:\n");
	ft_putstr(str2);
	ft_putstr("\nFT_STRCPY:\n");
	ft_putstr(str4);
	ft_putstr("\n\n");
}

int	main(void)
{
	test1();
	test2();
	return(0);
}
*/
