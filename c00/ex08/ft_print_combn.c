
#include <unistd.h>

void init_nb(int nb[9], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		nb[i] = i + 1;
		i++;
	}
}

void	print_nb(int *nb, int n)
{
	int	value;

	while (n - 1 >= 0)
	{
		value = nb[n - 1] + '0';
		write(1, &value, 1);
		n--;
	}
}

void	it_max_nb(int nb[9], int n)
{
	int	max_value;
	int	ref;

	ref = n;
	max_value = 8;
	while (nb[ref - 1] == max_value && ref > 0)
	{
		ref--;
		max_value--;
	}
	if (ref > 0)
		nb[ref - 1]++;
	while (ref + 1 < n && ref > 0)	
	{
		nb[ref] = nb[ref - 1] + 1;
		ref++;
	}
}

void	ft_print_combn(int n)
{
	int	nb[9];
	int	ref;
	int	test;

	init_nb(nb, n);
	test = 10;
	while (*nb <= (10 - n) && test > 0)
	{
		print_nb(nb, n);
		write(1, "\n", 1);
		if (nb[n - 1] > 9)
			it_max_nb(nb, n);
		else
			nb[n - 1]++;
		test--;
	}
}

// 9: 1-2-3-4 -5-6-7-8-9
// 8: 2-3-4-5 -6-7-8-9
// 1: 9

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
