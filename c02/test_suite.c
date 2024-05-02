/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_suite.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:47:44 by nimatura          #+#    #+#             */
/*   Updated: 2024/05/02 18:48:10 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

/*	FT_STRCPY */
void	ft_putstr(char *str);
void	strcpy1();
void	strcpy2();



void	ft_strcpy_tests(void)
{
	strcpy1();
	strcpy2();
}

int	main(void)
{
	ft_strcpy_tests();
	return (0);
}
