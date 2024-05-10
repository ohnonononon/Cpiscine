/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 22:55:48 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/10 12:03:08 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	aux_legitstr(char c)
{
	if (c >= '1' && c <= '9')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	aux_isspace(char c)
{
	if (c == '\n' || c == '\t')
		return (1);
	else if (c == '\v' || c == '\f')
		return (1);
	else if (c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	parse_base(char *base, int *len)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	*len = i;
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0' && base[i] != base[j])
			j++;
		if (base[i] == base[j])
			return (0);
		i++;
	}
	return (i);
}

int	aux_indexzero(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int		result;
	int		i;
	int		sign;
	int		baselen;

	i = 0;
	sign = 1;
	result = 0;
	if (parse_base(base, &baselen) == 0)
		return (0);
	while (aux_isspace(str[i]) == 1)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] != '\0' && aux_legitstr(str[i]))
		result = result * baselen + aux_indexzero(str[i++], base);
	return (sign * result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	c;
	char	*s1 =  "-80000000";
	char	*s2 = "12 3";
	char	*s3 = "1a2";
	char	*s4 = "-2+3";
	char	*s5 = "---345";
	char	*base = "0123456789abcdef";

	c = ft_atoi_base(s1, base);
	printf("s1	%s	%d\n", s1, c);
//	c = ft_atoi_base(s2, base);
//	printf("s2	%s	%d\n", s2, c);
//	c = ft_atoi_base(s3, base);
//	printf("s3	%s	%d\n", s3, c);
//	c = ft_atoi_base(s4, base);
//	printf("s4	%s	%d\n", s4, c);
//	c = ft_atoi_base(s5, base);
//	printf("s5	%s	%d\n", s5, c);
	return (0);
}*/
