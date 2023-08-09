/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:44:46 by pteh              #+#    #+#             */
/*   Updated: 2023/08/09 16:54:38 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	mult;

	mult = 0;
	if (nb > 2)
		mult = nb * ft_recursive_factorial(nb - 1);
	if (nb == 0 || nb == 1)
		mult = 1;
	if (nb == 2)
		mult = 1 * 2;
	return (mult);
}
/*
int	main(void)
{
	printf("0!:%d\n",ft_recursive_factorial(0));
	printf("1!:%d\n",ft_recursive_factorial(1));
	printf("2!:%d\n",ft_recursive_factorial(2));
	printf("3!:%d\n",ft_recursive_factorial(3));
	printf("10!:%d\n",ft_recursive_factorial(10));
}
*/
