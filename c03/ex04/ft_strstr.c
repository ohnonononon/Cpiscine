/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:23:05 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/06 19:50:39 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *needle)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!*needle)
		return (str);
	while (str[j + i] != '\0')
	{
		if (needle[i] == str[j + i])
		{
			i = 0;
			while (str[j + i] == needle[i] && needle[i] != '\0')
				i++;
			if (needle[i] == '\0')
				return (str + j);
		}
		j++;
	}
	return (NULL);
}
