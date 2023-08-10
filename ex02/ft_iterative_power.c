/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:01:45 by pteh              #+#    #+#             */
/*   Updated: 2023/08/10 17:09:40 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	mul;

	mul = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power > 0)
	{
		mul = mul * nb;
		power--;
	}
	return (mul);
}

int	main(void)
{
	printf("10 power 2: %d\n", ft_iterative_power(10,2));
	printf("10 power 4: %d\n", ft_iterative_power(10,4));
	printf("3 power 2: %d\n", ft_iterative_power(3,2));
}
