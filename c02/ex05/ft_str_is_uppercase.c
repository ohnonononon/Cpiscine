/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:03:53 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/06 13:44:28 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	if (!str || *str == '\0')
		return (1);
	while (*str >= 'A' && *str <= 'Z')
		str++;
	if (*str == '\0')
		return (1);
	return (0);
}
