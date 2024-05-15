/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:24:04 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/15 13:01:32 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int		i;
	char	*str;

	i = 0;
	str = *av;
	if (ac > 0)
	{
		while (str[i] != '\0')
		{
			write(1, str + i, 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
