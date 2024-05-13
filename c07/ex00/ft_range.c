/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 21:36:55 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/13 22:08:44 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	unsigned int 	i;
	unsigned int	*arr;

	arr = NULL;
	i = 0;
	if (min >= max)
		return (NULL);
	arr = (unsigned int *)malloc(sizeof(int) * (max - min));
	// checkear si max == negativo
	while (min < max)
		arr[i++] = min++;
	return (arr);
}

#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	min;
	int	max;
	int	*arr;
	int	i;

	i = 0;
	min = INT_MIN;
	max = INT_MAX;
	arr = ft_range(min, max);
	while (min <= max)
		printf("min	%d	max	%d	contains	%d\n", min++, max, arr[i++]);
	if (arr != NULL)
		free(arr);
	return (0);
}
