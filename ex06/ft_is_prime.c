/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:51:02 by pteh              #+#    #+#             */
/*   Updated: 2023/08/12 15:45:24 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_is_prime(int nb)
{
	int	sqrt;

	sqrt = 2;
	if (nb < 0 || nb == 0 || nb == 1 || nb > INT_MAX || nb % 2 == 0)
		return (0);
	if (nb > 2)
	{
		while ((nb < 46340) && (sqrt * sqrt <= nb))
		{
			if (nb % sqrt == 0)
				return (0);
			sqrt++;
		}
	}
	return (1);
}

int	main(void)
{
	printf("is 5 a prime?:%d\n", ft_is_prime(5));
	printf("is 6 a prime?:%d\n", ft_is_prime(6));
	printf("is 7 a prime?:%d\n", ft_is_prime(7));
	printf("is 8 a prime?:%d\n", ft_is_prime(8));
	printf("is 523 a prime?:%d\n", ft_is_prime(523));
	printf("is 526 a prime?:%d\n", ft_is_prime(526));
	printf("is 859 a prime?:%d\n", ft_is_prime(859));
}
