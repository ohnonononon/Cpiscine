/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 22:30:46 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/14 22:49:05 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int 	i;
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

int	ft_ultimate_range(int **range, int min, int max)
{
	int 	i;
	int	*arr;

	arr = NULL;
	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	arr = malloc(sizeof(int) * (max - min));
	while (min < max)
		arr[i++] = min++;
	range = &arr;
	return (max - min);
	
}

#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	min;
	int	max;
	int	*arr;
	int	i;
	int	res;

	i = 0;
	min = -10;
	max = 10;
	res = ft_ultimate_range(&arr, min, max);
	printf("res	%d\n", res);
	while (min < max)
		printf("min	%d	max	%d	contains	%d\n", min++, max, arr[i++]);
	if (arr != NULL)
		free(arr);
	return (0);
}
