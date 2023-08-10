/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:10:33 by pteh              #+#    #+#             */
/*   Updated: 2023/08/10 18:46:52 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	mul;

	mul = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power > 1)
	{
		mul = nb * ft_recursive_power(nb, power - 1);
	}
	return (mul);
}

/*
int	main(void)
{
	printf("10 power 2: %d\n", ft_recursive_power(10,2));
	printf("10 power 4: %d\n", ft_recursive_power(10,4));
	printf("3 power 2: %d\n", ft_recursive_power(3,2));
}*/
