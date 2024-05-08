/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:00:35 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/08 17:37:29 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	aux_baselen(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	if (!str)
		return (1);
	while (str[i])
	{
		while(str[i] != str[i + j] && str[i + j] != '\0')
		{
			j++;
			if (str[i + j] == '+' || str[i + j] == '-')
				return (1);
			if (str[i] == str[i + j])
				return (1);
		}
		i++;
	}
	if (i == 1)
		return (1);
	return (i);
}

void	print_minint(int digits, char *base)
{
	baselen
}

void	print(char c)
{
	write(1, &c, 1);
}

void	aux_neg(int	baselen, char *base)
{
	print(base['-' % baselen]);
	return (-1);
}

void	ft_putnbr_base(int nb, char *base)
{
	int	i;
	int	baselen;

	i = 0;
	baselen = aux_baselen(base);
	if (baselen == 1)
		return ;
	if (nb == -2147483648)
	{
		print_minint(baselen, base);
		return ;
	}
	if (nb < 0)
		nb *= aux_neg(baselen, base);
	if (nb / baselen)
		ft_putnbr_base(nb / baselen);
	print(base[nb % baselen] + '0');
}
