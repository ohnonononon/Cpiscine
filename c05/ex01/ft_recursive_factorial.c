/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:28:50 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/10 12:34:25 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * (ft_recursive_factorial(nb - 1)));
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	res;

	i = 0;
	res = ft_recursive_factorial(i);
	printf("%d!	%d\n", i, res);
	i = 1;
	res = ft_recursive_factorial(i);
	printf("%d!	%d\n", i, res);
	i = -1;
	res = ft_recursive_factorial(i);
	printf("%d!	%d\n", i, res);
	i = 4;
	res = ft_recursive_factorial(i);
	printf("%d!	%d\n", i, res);
	return (0);
}*/
