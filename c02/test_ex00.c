/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:43:17 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/02 18:48:25 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	strcpy()
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

void	strcpy2()
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
