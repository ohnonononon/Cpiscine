/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:17:00 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/06 18:40:49 by nimatura         ###   ########.fr       */
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

char	*ft_strncat(char *dst, char *src, unsigned int nb)
{
	unsigned int	src_len;
	unsigned int	dst_len;
	unsigned int	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	if (nb == 0)
		return (dst);
	while (i < src_len && i < nb)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	return (dst_len);
}
