/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:27:46 by pteh              #+#    #+#             */
/*   Updated: 2023/08/10 16:57:35 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	mult;

	mult = 1;
	if ((nb == 0) || (nb == 1))
		mult = 1;
	while (nb > 0)
	{
		mult = mult * nb;
		nb--;
	}
	return (mult);
}
/*
int	main(void)
{
	printf("0!:%d\n",ft_iterative_factorial(0));
	printf("1!:%d\n",ft_iterative_factorial(1));
	printf("2!:%d\n",ft_iterative_factorial(2));
	printf("3!:%d\n",ft_iterative_factorial(3));
	printf("10!:%d\n",ft_iterative_factorial(10));
}*/
