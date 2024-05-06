/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:00:13 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/06 14:16:16 by nimatura         ###   ########.fr       */
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
	int	src_len;
	int	dst_len;
	int	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	while (i < src_len)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	return (dst);
}
