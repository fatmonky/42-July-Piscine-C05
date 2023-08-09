/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:27:46 by pteh              #+#    #+#             */
/*   Updated: 2023/08/09 16:44:34 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	//int	i;
	int	sum;

	sum = 0;
	if (nb == 0)
		sum = 1;
	if (nb == 1)
		sum = 1;
	while (nb > 1)
	{
		sum = nb * (nb - 1);
		nb--;
	}
	return (sum);
}

int	main(void)
{
	printf("0!:%d\n",ft_iterative_factorial(0));
	printf("1!:%d\n",ft_iterative_factorial(1));
	printf("2!:%d\n",ft_iterative_factorial(2));
	printf("3!:%d\n",ft_iterative_factorial(3));
	printf("10!:%d\n",ft_iterative_factorial(10));
}
//9 Aug: code right now does not work: test cases all return 2. 
