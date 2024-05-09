
#include <stdio.h>

int	parse_base(char *base, int *len)
{
	int	i;

	*len = 0;
	while (base[*len] != '\0')
		(*len)++;
	if (*len != 16 && *len != 8 && *len != 2 && *len != 10)
		return (1);
	*len = 0;
	while (base[*len] != '\0')
	{
		i = *len + 1;
		if (base[*len] == '+' || base[*len] == '-')
			return (3);
		while (base[i] && base[*len] != base[i])
			i++;
		if (base[*len] == base[i] && base[*len] != '\0')
			return (1);
		(*len)++;
	}
	return (*len);
}

int	main(void)
{
	int	i;
	char	*s1 = "0123456789";
	char	*s2 = "01";
	char	*s3 = "poniguay";
	char	*s4 = "0123456789abcdef";

	i = 0;
	i = parse_base(s1, &i);
	printf("%s	%d\n", s1, i);
	i = parse_base(s2, &i);
	printf("%s	%d\n", s2, i);
	i = parse_base(s3, &i);
	printf("%s	%d\n", s3, i);
	i = parse_base(s4, &i);
	printf("%s	%d\n", s4, i);
}
