
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	char	*str;

	str = av[0];
	ft_putstr(str);
	return (0);
}
