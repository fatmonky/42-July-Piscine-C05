/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sqrt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:52:40 by pteh              #+#    #+#             */
/*   Updated: 2023/08/14 18:54:25 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <limits.h>


int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 0;
	while (++sqrt <= nb)
		if (sqrt >= nb / sqrt)
			return ((sqrt * sqrt == nb) * sqrt);
	return (0);
}   
int	main(void)
{
	printf("root of 0:%d\n", ft_sqrt(0));
	printf("root of 1:%d\n", ft_sqrt(1));
	printf("root of 2:%d\n", ft_sqrt(2));
	printf("root of 9:%d\n", ft_sqrt(9));
	printf("root of 10:%d\n", ft_sqrt(10));
	printf("root of 4:%d\n", ft_sqrt(4));
	printf("root of 15:%d\n", ft_sqrt(15));
	printf("root of 16:%d\n", ft_sqrt(16));
	printf("root of INT_MAX:%d\n", ft_sqrt(INT_MAX));
}
