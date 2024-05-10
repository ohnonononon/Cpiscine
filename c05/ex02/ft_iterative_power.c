/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:35:48 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/10 14:18:22 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	result = result * nb;
	while (power - 1 >= 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	int	i;
	int	res;
	int	pwr;

	i = 0;
	pwr = 2;
	res = ft_iterative_power(i, pwr);
	printf("%d ^%d	%d\n", i, pwr, res); 
	i = 0;
	pwr = 0;
	res = ft_iterative_power(i, pwr);
	printf("%d ^%d	%d\n", i, pwr, res); 
	i = 2;
	pwr = 8;
	res = ft_iterative_power(i, pwr);
	printf("%d ^%d	%d\n", i, pwr, res); 
	i = 2;
	pwr = -2;
	res = ft_iterative_power(i, pwr);
	printf("%d ^%d	%d\n", i, pwr, res); 
	i = -8;
	pwr = 3;
	res = ft_iterative_power(i, pwr);
	printf("%d ^%d	%d\n", i, pwr, res); 
	return (0);
}
