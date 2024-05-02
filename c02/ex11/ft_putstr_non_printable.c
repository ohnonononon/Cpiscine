/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:52:10 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/02 21:32:16 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aux_print(char c)
{
	write(1, &c, 1);
}

void	hex_atoi(int c, char *hex)
{
	if (c / 16)
		hex_atoi(c / 16, hex);
	aux_print(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if ((*str <= 31 && *str >= 0) || *str == 127)
		{
			aux_print('\\');
			hex_atoi(*str, "0123456789abcdef");
		}
		else
			aux_print(*str);
		str++;
	}
}
