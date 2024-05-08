/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:00:13 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/08 13:40:41 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i = i + 1;
	return (i);
}

char	*ft_strcat(char *dst, char *src)
{
	char	*ret;
	int		src_len;
	int		i;

	ret = dst;
	src_len = ft_strlen(src);
	i = 0;
	while (*dst)
		dst++;
	while (i < src_len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ret);
}
/*

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst1[10];
	char	dst2[10];
	char	*str;
	int		i;

	i = 0;
	str = "bbbbb";
	while (i < 5)
	{
		dst1[i] = 'a';
		dst2[i] = 'a';
		i++;
	}
	dst1[i] = '\0';
	dst2[i] = '\0';
	printf("dst1	%s\n", dst1);
	printf("dst2	%s\n", dst2);
	strcat(dst1, str);
	printf("dst1	%s\n", dst1);
	//ft_strcat(dst2, str);
	printf("dst2	%s\n", dst2);
	return (0);
}
*/
