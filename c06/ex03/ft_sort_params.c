/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:38:17 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/14 19:27:56 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

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

char	**sort_strs(char **tab, int size)
{
	int		i;
	char	*tmp;

	i = 0;
	while (i < size && tab[i + 1] != NULL)
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
	return (tab); 
}

void	print_matrix(char **tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
		ft_putstr(tab[i++]);
}

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (ac == 2)
	{
		ft_putstr(av[1]);
		return (0);
	}
	av = sort_strs(av + 1, ac - 1);
	print_matrix(av , ac);
	return (0);
}
