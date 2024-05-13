/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:35:57 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/13 13:37:25 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	int		i;

	i = ac - 1;
	if (ac < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (i > 0)
	{
		ft_putstr(av[i]);
		i--;
	}
	return (0);
}
