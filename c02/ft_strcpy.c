/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 11:42:55 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/01 16:12:41 by nimatura         ###   ########.fr       */
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

char	*ft_strncpy(char *dst, char *src, unsigned int n)
{
	unsigned int	n;

	n = 0;
	while (i < n && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	return (i);
}

int	ft_str_is_alpha(char *str)
{
	if (!str || *str == '\0')
		return (1);
	while ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		str++;
	if (*str == '\0')
		return (1);
	return (0)
}

int	ft_str_is_numeric(char *str)
{
	if (!str || *str == '\0')
		return (1);
	while (*str >= '0' && *str <= '9')
		str++;
	if (*str == '\0')
		return (1);
	return (0)
}

int	ft_str_is_lowercase(char *str)
{
	if (!str || *str == '\0')
		return (1);
	while (*str >= 'a' && *str <= 'z')
		str++;
	if (*str == '\0')
		return (1);
	return (0)
}

int	ft_str_is_uppercase(char *str)
{
	if (!str || *str == '\0')
		return (1);
	while (*str >= 'A' && *str <= 'Z')
		str++;
	if (*str == '\0')
		return (1);
	return (0)
}

int	ft_str_is_printable(char *str)
{
	if (!str || *str == '\0')
		return (1);
	while (*str >= 32 && *str <= 126)
		str++;
	if (*str == '\0')
		return (1);
	return (0)
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

/* ft_strcapitalize */

char	aux_isletnum(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	aux_iswierdsign(char c)
{
	if (c == ' ' || c == '-' || c == '+')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (aux_iswierdsign(str[i]) && str[i] != '\0')
			i++;
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		while (aux_isletnum(str[i]) && str[i] != '\0')
			i++;
	}
	return (str);
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
