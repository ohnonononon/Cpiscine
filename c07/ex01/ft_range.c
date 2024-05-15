/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 21:36:55 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/15 20:05:04 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	arr = NULL;
	i = 0;
	if (min >= max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min));
	while (min < max)
		arr[i++] = min++;
	return (arr);
}
/*
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	min;
	int	max;
	int	*arr;
	int	i;

	i = 0;
	min = -10;
	max = 10;
	arr = ft_range(min, max);
	while (min < max)
		printf("min	%d	max	%d	contains	%d\n", min++, max, arr[i++]);
	if (arr != NULL)
		free(arr);
	return (0);
}*/
