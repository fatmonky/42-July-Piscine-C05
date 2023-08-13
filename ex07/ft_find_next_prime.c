/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:59:21 by pteh              #+#    #+#             */
/*   Updated: 2023/08/13 14:26:36 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	check_prime(int nb)
{
	int	try;

	try = 2;
	if (nb < 0 || nb == 0 || nb == 1 || nb > INT_MAX)
		return (0);
	if (nb == 2)
		return (1);
	if (nb > 2)
	{
		while ((nb < 46340) && (try * try <= nb))
		{
			if ((nb % try == 0) || (nb % 2 == 0))
				return (0);
			try++;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	try;
	int	upper_limit;

	try = nb;
	upper_limit = (INT_MAX / 2) + 1;
	if (check_prime(nb) == 1)
		return (nb);
	else
	{
		while (try < upper_limit)
		{
			try++;
			if (check_prime(try) == 1)
				return (try);
		}
	}
	return (nb);
}
/*
   int	main(void)
   {
   printf("What is the next prime after 0?: %d\n", ft_find_next_prime(0));
   printf("What is the next prime after 1?: %d\n", ft_find_next_prime(1));
   printf("What is the next prime after 2?: %d\n", ft_find_next_prime(2));
   printf("What is the next prime after 5?: %d\n", ft_find_next_prime(5));
   printf("What is the next prime after 6?: %d\n", ft_find_next_prime(6));
   printf("What is the next prime after 12?: %d\n", ft_find_next_prime(12));
   printf("What is the next prime after 15?: %d\n", ft_find_next_prime(15));
   printf("What is the next prime after 524?: %d\n", ft_find_next_prime(524));
   }*/
