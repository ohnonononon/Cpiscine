/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:52:10 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/06 13:45:26 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aux_print(unsigned char c)
{
	write(1, &c, 1);
}

void	hex_atoi(int c, unsigned char *hex)
{
	aux_print(hex[c / 16]);
	aux_print(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str <= 31 || *str >= 127)
		{
			aux_print('\\');
			hex_atoi((unsigned char)*str, "0123456789abcdef");
		}
		else
			aux_print(*str);
		str++;
	}
}
//
//int	main(void)
//{
//	char src[0xFF + 10];
//	int	i;
//
//	i = 1;
//	while (i <= 0xFF)
//	{
//		src[i - 1] = i;
//		i++;
//	}
//	src[i - 1] = 0;
//	ft_putstr_non_printable(src);
//	return (0);
//}
