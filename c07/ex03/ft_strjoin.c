/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 10:29:44 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/15 20:07:07 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	count_str(int size, char **strs, char *set)
{
	int	i;
	int	j;
	int	total;

	i = 0;
	j = 0;
	total = 0;
	while (strs[i] != NULL && i < size)
	{
		while (strs[i][j] != '\0')
			j++;
		if (j > 0)
		{
			total += j;
			j = 0;
		}
		i++;
	}
	if (i > 1)
		total += (ft_strlen(set) * i - 1);
	return (total);
}

char	*cpy_em(char *dst, char **src, int size, char *set)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	j = 0;
	while (i < size)
	{
		while (src[i][j] != '\0')
			dst[k++] = src[i][j++];
		j = 0;
		i++;
		while (i < size && set[j])
			dst[k++] = set[j++];
		j = 0;
	}
	dst[k] = '\0';
	return (dst);
}

char	*ft_strjoin(int size, char **arr, char *set)
{
	char	*str;
	int		strlen;

	str = NULL;
	if (size == 0 || !arr)
	{
		str = malloc(sizeof(char));
		if (!str)
			return (NULL);
		*str = '\0';
		return (str);
	}
	strlen = 0;
	strlen = count_str(size, arr, set);
	if (size > 0)
	{
		str = malloc(sizeof(char) * (strlen + 1));
		if (!str)
		{
			free(str);
			return (NULL);
		}
		str = cpy_em(str, arr, size, set);
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	int		size = 3;
	char	*test[] = {"abcdegf", "pikachu", "123"};
	char	*set = "papoteate";
	char	*str = ft_strjoin(size, test, set);
	printf("%s\n", str);
	free(str);
	return (0);
}*/
