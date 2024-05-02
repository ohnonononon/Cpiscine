/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:01:36 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/02 17:02:22 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft is nonsense: redo

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
