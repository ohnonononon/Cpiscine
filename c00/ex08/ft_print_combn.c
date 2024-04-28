/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:18:14 by nimatura          #+#    #+#             */
/*   Updated: 2024/04/28 11:52:18 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	init_nb(int *nb, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		*nb = i;
		nb++;
		i++;
	}
}

void	print_nb(int *nb, int n)
{
	int	value;
	int	i;

	i = 0;
	while (i < n)
	{
		value = nb[i] + '0';
		write(1, &value, 1);
		i++;
	}
}

int	check_end(int *nb, int n)
{
	int	max_value;

	max_value = 9;
	while (nb[n - 1] == max_value && n > 0)
	{
		max_value--;
		n--;
	}
	if (n == 0)
		return (1);
	write(1, ", ", 2);
	return (0);
}

void	it_max_nb(int *nb, int n)
{
	int	max_value;
	int	ref;

	ref = n;
	max_value = 9;
	while (nb[ref - 1] == max_value && ref > 0)
	{
		ref--;
		max_value--;
	}
	if (ref > 0)
		nb[ref - 1]++;
	while (ref <= n - 1 && ref > 0)
	{
		nb[ref] = nb[ref - 1] + 1;
		ref++;
	}
}

void	ft_print_combn(int n)
{
	int	nb[9];

	init_nb(nb, n);
	while (*nb <= (10 - n))
	{
		print_nb(nb, n);
		if ((check_end(nb, n)))
			return ;
		if (nb[n - 1] >= 9)
			it_max_nb(nb, n);
		else
			nb[n - 1]++;
	}
}
