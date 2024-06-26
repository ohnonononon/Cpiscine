/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:03:39 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/06 13:44:24 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	if (!str || *str == '\0')
		return (1);
	while (*str >= 'a' && *str <= 'z')
		str++;
	if (*str == '\0')
		return (1);
	return (0);
}
