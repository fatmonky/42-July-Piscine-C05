/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:59:21 by pteh              #+#    #+#             */
/*   Updated: 2023/08/15 11:31:24 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	check_prime(int nb)
{
	int	try;

	try = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb > 2)
	{
		while (try <= nb / try)
		{
			if (nb % try == 0)
				return (0);
			try++;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (check_prime(nb) == 1)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
/*int	main(void)
{
	printf("What is the next prime after 0?: %d\n", ft_find_next_prime(0));
	printf("What is the next prime after 1?: %d\n", ft_find_next_prime(1));
	printf("What is the next prime after 2?: %d\n", ft_find_next_prime(2));
	printf("What is the next prime after 5?: %d\n", ft_find_next_prime(5));
	printf("What is the next prime after 12?: %d\n", ft_find_next_prime(12));
	printf("What is the next prime after 15?: %d\n", ft_find_next_prime(15));
	printf("What is the next prime after 524?: %d\n", ft_find_next_prime(524));
	printf("What is the next prime after 2147483640?: %d\n", ft_find_next_prime(2147483640));
}*/
