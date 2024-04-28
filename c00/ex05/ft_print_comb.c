/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:50:49 by nimatura          #+#    #+#             */
/*   Updated: 2024/04/28 11:05:48 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printnumbers(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (c != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	d = '1';
	u = '2';
	while (c <= '7' && d <= '8' && u <= '9')
	{
		printnumbers(c, d, u);
		if (u == '9')
		{
			if (d == '8')
			{
				c++;
				d = c + 1;
			}
			else
				d++;
			u = d + 1;
		}
		else
			u++;
	}
}
