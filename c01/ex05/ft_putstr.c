/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 11:04:32 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/01 12:34:14 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//void	ft_putstr(char *str)
//{
//	write(1, str, 1);
//	if (*(str + 1) != '\0')
//		ft_putstr(str + 1);
//}
void	ft_putstr(char *str)
{
	int	i;

	i = 3;
	write(1, &str[i], 1);
}

int	main()
{
	ft_putstr("hola");
	return (0);
}
