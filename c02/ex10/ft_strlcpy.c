/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:10:28 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/08 21:49:23 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dst, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (i < size - 1 && i < src_len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
//#include <string.h>
//#include <stdio.h>
//
//
//int	main()
//{
//	char	s1[] = "123456789";
//	char	s2[2];
//	char	s3[2];
//	char	s1len;
//
//	s1len = ft_strlen(s1);
//	printf("test:	%s	%u\n\n", s1, s1len);
//	printf("og:	%s	%zu\n", s2, strlcpy(s2, s1, s1len));
//	printf("ft:	%s	%u\n", s3, ft_strlcpy(s3, s1, s1len));
//	return (0);
//}
