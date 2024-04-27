
#include <unistd.h>

void	pchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb / 10)
		ft_putnbr(nb / 10);
	pchar(nb % 10 + '0');
}
/***
int	main(void)
{
	ft_putnbr(0);
	pchar('\n');
	ft_putnbr(123);
	pchar('\n');
	ft_putnbr(-123);
	pchar('\n');
	ft_putnbr('@');
	pchar('\n');
	ft_putnbr(12-3);
	pchar('\n');
	return (0);
}***/
