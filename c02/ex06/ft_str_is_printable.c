/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:04:14 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/02 19:22:43 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (!str || *str == '\0')
		return (1);
	while (*str >= 32 && *str <= 126)
		str++;
	if (*str == '\0')
		return (1);
	return (0);
}
