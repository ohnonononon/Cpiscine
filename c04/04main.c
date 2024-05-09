
#include <limits.h>

void	recursive_printer(long nb, int baselen, char *base);
void	ft_putnbr_base(int nbr, char *base);
void	print(unsigned char c);

int	main(void)
{
	char	*base10 = "0123456789";
	char	*base8 = "poniguay";
	char	*base16 = "0123456789ABCDEF";
	char	*base2 = "01";

	ft_putnbr_base(INT_MAX, base10);
	write(1, "\n", 1);
	ft_putnbr_base(INT_MAX, base8);
	write(1, "\n", 1);
	ft_putnbr_base(INT_MAX, base16);
	write(1, "\n", 1);
	ft_putnbr_base(INT_MAX, base2);
	write(1, "\n", 1);

	return (0);
}
//	// test base10 
//	ft_putnbr_base(INT_MIN, base10);
//	write(1, "\n", 1);
//	ft_putnbr_base(-1234, base10);
//	write(1, "\n", 1);
//	ft_putnbr_base(0, base10);
//	write(1, "\n", 1);
//	// test base8
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
}
