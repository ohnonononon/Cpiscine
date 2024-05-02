/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:10:28 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/02 17:10:49 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
