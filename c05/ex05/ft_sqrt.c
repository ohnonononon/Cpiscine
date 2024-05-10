/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:44:06 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/10 14:51:10 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i < nb)
		i++;
	if (i * i != nb)
		return (0);
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;

	i = 1;
	printf("i	%d\ni^1/2	%d\n", i, ft_sqrt(i));
	i = 2;
	printf("i	%d\ni^1/2	%d\n", i, ft_sqrt(i));
	i = 9;
	printf("i	%d\ni^i/2	%d\n", i, ft_sqrt(i));
	i = 4;
	printf("i	%d\ni^i/2	%d\n", i, ft_sqrt(i));
	i = 25;
	printf("i	%d\ni^i/2	%d\n", i, ft_sqrt(i));
	i = 57;
	printf("i	%d\ni^i/2	%d\n", i, ft_sqrt(i));
	return (0);
}*/
