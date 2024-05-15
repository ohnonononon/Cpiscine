/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 22:14:48 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/15 20:03:26 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		slen;
	int		i;

	slen = ft_strlen(src);
	str = malloc(sizeof(char) * (slen + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (src[i] != '\0' && i < slen)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str;
	char	*str2;

	str = ft_strdup("");
	str2 = strdup("");
	printf("ft	%s\n", str);
	printf("og	%s\n", str2);
	if (*str == *str2)
		printf("equals\n"); //if str doesnt contain a thing the direction
							//still gets malloc'd
	free(str);
	free(str2);
	return (0);
}*/
