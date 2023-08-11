/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:59:21 by pteh              #+#    #+#             */
/*   Updated: 2023/08/11 11:22:04 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <limits.h>

int	ft_find_next_prime(int nb)
{
	int	sqrt;
	int	upper_limit;

	sqrt = 2;
	upper_limit = 46341;
	if (nb < 0 || nb == 0 || nb == 1 || nb > INT_MAX)
		return (0);
	if (nb > 2)
	{
		while (nb < upper_limit && sqrt * sqrt <= upper_limit) //while we increase towards
		{
			sqrt++;
			if (nb % sqrt != 0)
				return (nb);
		}
	}
	return (1);
}

int	main(void)
{
	printf("is 5 a prime?:%d\n", ft_find_next_prime(5));
	printf("is 6 a prime?:%d\n", ft_find_next_prime(6));
	printf("is 7 a prime?:%d\n", ft_find_next_prime(7));
	printf("is 8 a prime?:%d\n", ft_find_next_prime(8));
}
