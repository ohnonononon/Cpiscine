
#include <unistd.h>

void	pchar(char c)
{
	write(1, &c, 1);
}

void	print_nb(char a)
{
	if (a < 10)
	{
		pchar('0');
		pchar(a + '0');
	}
	else
	{
		pchar(a / 10 + '0');
		pchar(a % 10 + '0');
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		print_nb(a);
		pchar(' ');
		print_nb(b);
		if (a < 98)
			write(1, ", ", 2);
		else 
		{
			write(1, "\n", 1);
			return ;
		}
		if (b == 99)
		{
			a++;
			b = a;
		}
		b++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
