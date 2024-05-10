/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:18:02 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/10 14:22:27 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0 || nb == 1)
		return (1);
	return (nb * (ft_recursive_power(nb, power - 1)));
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	res;
	int	pwr;

	i = 0;
	pwr = 2;
	res = ft_recursive_power(i, pwr);
	printf("%d ^%d	%d\n", i, pwr, res); 
	i = 0;
	pwr = 0;
	res = ft_recursive_power(i, pwr);
	printf("%d ^%d	%d\n", i, pwr, res); 
	i = 2;
	pwr = 8;
	res = ft_recursive_power(i, pwr);
	printf("%d ^%d	%d\n", i, pwr, res); 
	i = 2;
	pwr = -2;
	res = ft_recursive_power(i, pwr);
	printf("%d ^%d	%d\n", i, pwr, res); 
	i = -8;
	pwr = 3;
	res = ft_recursive_power(i, pwr);
	printf("%d ^%d	%d\n", i, pwr, res); 
	return (0);
}*/
