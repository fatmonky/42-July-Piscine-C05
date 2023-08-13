/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:15:55 by pteh              #+#    #+#             */
/*   Updated: 2023/08/13 14:28:21 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 2;
	if (nb < 0 || nb == 0 || nb > INT_MAX)
		sqrt = 0;
	if (nb == 1)
		sqrt = 1;
	if (nb == 2)
		sqrt = 0;
	if (nb > 2)
	{
		while (sqrt * sqrt <= nb)
		{
			if (sqrt * sqrt == nb)
				return (sqrt);
			sqrt++;
		}
		sqrt = 0;
	}
	return (sqrt);
}
/*
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
}*/
