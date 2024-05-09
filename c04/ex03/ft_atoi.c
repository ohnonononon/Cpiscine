/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:30:30 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/09 22:52:10 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	aux_sign(char c)
{
	if (c == '-')
		return (-1);
	return (1);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	while (aux_isspace(*str) == 1)
		str++;
	while (*str == '-' || *str == '+')
		sign *= aux_sign(*(str++));
	while (*str >= '0' && *str <= '9')
		result = result * 10 + (*(str++) - '0');
	return (sign * result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	c;
	char	*s1 = "42";
	char	*s2 = "12 3";
	char	*s3 = "1a2";
	char	*s4 = "-2+3";
	char	*s5 = "---345";

	c = ft_atoi(s1);
	printf("s1	%s	%d\n", s1, c);
	c = ft_atoi(s2);
	printf("s2	%s	%d\n", s2, c);
	c = ft_atoi(s3);
	printf("s3	%s	%d\n", s3, c);
	c = ft_atoi(s4);
	printf("s4	%s	%d\n", s4, c);
	c = ft_atoi(s5);
	printf("s5	%s	%d\n", s5, c);
	return (0);
}*/
