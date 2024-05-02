/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 11:42:55 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/02 17:05:33 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

/* ft_strlcpy */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dst, char *src, unsigned int size)
{
	int	i;
	int	src_len;
	int	dst_len;

	i = 0;
	src_len = ft_strlen(src);
	while (i < size - 2)
	{
		dst[i] = src[i];
		i++;
	}
	if (size)
		dst[size - 1] = '\0';
	return (src_len);
}
