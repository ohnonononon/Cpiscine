/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 01:46:41 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/11 20:16:41 by ohnudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (nb > 0)
	{
		if (is_prime(nb))
			return (nb);
		nb += 2;
	}
	return (nb);
}
/*
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	i;

	i = INT_MAX;
	printf("i	%d\nnext_prime?	%d\n", i, ft_find_next_prime(i));
	return (0);
}*/
