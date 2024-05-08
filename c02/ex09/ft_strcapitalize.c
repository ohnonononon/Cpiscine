/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:05:09 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/08 22:03:37 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	aux_alphanum(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (!aux_alphanum(str[i]) && str[i] != '\0')
			i++;
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		if (str[i] != '\0')
			i++;
		while (aux_alphanum(str[i]) == 1 && str[i] != '\0')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			i++;
		}
	}
	return (str);
}
