void	ft_putstr(char *str)
{
	write(1, str, 1);	
	if (*str != '\0')
		ft_putstr(str + 1);
}

