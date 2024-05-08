/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:30:30 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/08 14:59:22 by nimatura         ###   ########.fr       */
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

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (aux_isspace(*str) == 1)
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		result = result * 10 + (*(str++) - 48);
	return (sign * result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	c;
	c = ft_atoi("    42");
	printf("int c	%d\n", c);
	c = ft_atoi("123");
	printf("int c	%d\n", c);
	c = ft_atoi("1a2");
	printf("int c	%d\n", c);
	c = ft_atoi("-2+3");
	printf("int c	%d\n", c);
	return (0);
}*/
