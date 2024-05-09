/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:00:35 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/09 22:09:08 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(unsigned char c)
{
	write(1, &c, 1);
}

int	ft_strncmp(char *base, char *format, unsigned int len)
{
	unsigned int	i;

	if (len == 0)
		return (0);
	i = 0;
	while (base[i] == format[i] && base[i] != '\0' && i < len - 1)
		i++;
	return (base[i] - format[i]);
}
// +, -, < 32, > 126
int	parse_base(char *base)
{
	int	baselen;

	baselen = 0;
	while (base[baselen] != '\0')
		baselen++;
	if (baselen == 10)
		if (ft_strncmp(base, "0123456789", baselen) == 0)
			return (baselen);
	if (baselen == 2)
		if (ft_strncmp(base, "01", baselen) == 0)
			return (baselen);
	if (baselen == 16)
		if (ft_strncmp(base, "0123456789ABCDEF", baselen) == 0)
			return (baselen);
	if (baselen == 8)
		if (ft_strncmp(base, "poniguay", baselen) == 0)
			return (baselen);
	return (1);
}

void	recursive_printer(long nb, int baselen, char *base)
{
	if (nb / baselen)
		recursive_printer(nb / baselen, baselen, base);
	print((unsigned char) base[nb % baselen]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		baselen;
	long	nb;

	i = 0;
	nb = (long) nbr;
	baselen = parse_base(base);
	if (baselen == 1)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	recursive_printer(nb, baselen, base);
}

//#include <limits.h>
//
//int	main(void)
//{
//	char	*base10 = "0123456789";
//	char	*base8 = "poniguay";
//	char	*base16 = "0123456789ABCDEF";
//	char	*base2 = "01";
//
//	// test base10 
//	ft_putnbr_base(1234567890, base10);
//	write(1, "\n", 1);
//	ft_putnbr_base(INT_MIN, base10);
//	write(1, "\n", 1);
//	ft_putnbr_base(-1234, base10);
//	write(1, "\n", 1);
//	ft_putnbr_base(0, base10);
//	write(1, "\n", 1);
//	// test base8
//	ft_putnbr_base(1234567890, base8);
//	write(1, "\n", 1);
//	ft_putnbr_base(INT_MIN, base8);
//	write(1, "\n", 1);
//	ft_putnbr_base(-1234, base8);
//	write(1, "\n", 1);
//	ft_putnbr_base(0, base8);
//	write(1, "\n", 1);
//	// test base16
//	ft_putnbr_base(1234567890, base16);
//	write(1, "\n", 1);
//	ft_putnbr_base(INT_MIN, base16);
//	write(1, "\n", 1);
//	ft_putnbr_base(-1234, base16);
//	write(1, "\n", 1);
//	ft_putnbr_base(0, base16);
//	write(1, "\n", 1);
//	// test base2
//	ft_putnbr_base(1234567890, base2);
//	write(1, "\n", 1);
//	ft_putnbr_base(INT_MIN, base2);
//	write(1, "\n", 1);
//	ft_putnbr_base(-1234, base2);
//	write(1, "\n", 1);
//	ft_putnbr_base(0, base2);
//	write(1, "\n", 1);
//	return (0);
//}
