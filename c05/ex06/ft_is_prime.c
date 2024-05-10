/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 00:10:08 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/11 00:30:10 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// optimised? first version: does o(n/2), now o(sqrt(n)). Only case of 1st
// being lower than 2nd breaks at n = 4.
int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
int	i;

i = 104729;
printf("i	%d\nprime?	%d\n", i, ft_is_prime(i));
return (0);
}*/
