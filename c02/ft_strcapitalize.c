/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:05:09 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/02 17:05:22 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
