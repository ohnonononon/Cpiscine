/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:00:35 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/09 22:50:07 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

int	parse_base(char *base, int *len)
{
	int	i;

	*len = 0;
	while (base[*len] != '\0')
		(*len)++;
	if (*len <= 1)
		return (1);
	*len = 0;
	while (base[*len] != '\0')
	{
		i = *len + 1;
		if (base[*len] == '+' || base[*len] == '-')
			return (1);
		if (base[*len] < 32 || base[*len] > 126)
			return (1);
		while (base[i] && base[*len] != base[i])
			i++;
		if (base[*len] == base[i] && base[*len] != '\0')
			return (1);
		(*len)++;
	}
	return (*len);
}

void	recursive_printer(int nb, int baselen, char *base)
{
	if (nb / baselen)
		recursive_printer(nb / baselen, baselen, base);
	print(base[nb % baselen]);
}

void	ft_putnbr_base(int nb, char *base)
{
	int		baselen;
	long	nbr;

	nbr = (long) nb;
	if (parse_base(base, &baselen) == 1)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
	}
	recursive_printer(nbr, baselen, base);
}
