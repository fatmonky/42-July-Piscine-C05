/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06-isprime.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:51:02 by pteh              #+#    #+#             */
/*   Updated: 2023/08/14 13:26:39 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//this is the refactored code using ChatGPT, but it seems to show that INT_MAX is not a prime, which it is.

//another iteration is below.

#include <stdio.h>
#include <limits.h>

int	ft_is_prime(int nb)
{
	int	factor;

	factor = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (factor <= nb / 2)
	{
		if (nb % factor == 0) 
			return (0);
		factor++;
	}
	return (1);
}

   int	main(void)
   {
   printf("is -5 a prime?:%d\n", ft_is_prime(-5));
   printf("is 0 a prime?:%d\n", ft_is_prime(0));
   printf("is 1 a prime?:%d\n", ft_is_prime(1));
   printf("is 2 a prime?:%d\n", ft_is_prime(2));
   printf("is 3 a prime?:%d\n", ft_is_prime(3));
   printf("is 4 a prime?:%d\n", ft_is_prime(4));
   printf("is 5 a prime?:%d\n", ft_is_prime(5));
   printf("is 6 a prime?:%d\n", ft_is_prime(6));
   printf("is 7 a prime?:%d\n", ft_is_prime(7));
   printf("is 8 a prime?:%d\n", ft_is_prime(8));
   printf("is 523 a prime?:%d\n", ft_is_prime(523));
   printf("is 526 a prime?:%d\n", ft_is_prime(526));
   printf("is 859 a prime?:%d\n", ft_is_prime(859));
   printf("is INT_MAX a prime?:%d\n", ft_is_prime(INT_MAX));
   }
