/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:23:20 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/10 14:43:36 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index <= 0)
		return (0);
	if (index == 1)
		return (1);
	return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;

	i = 8;
	int	res;
	res = ft_fibonacci(i);
	printf("i %d	res %d\n", i, res);
	return (0);
}*/
