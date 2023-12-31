/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:59:21 by pteh              #+#    #+#             */
/*   Updated: 2023/08/15 11:32:08 by pteh             ###   ########.fr       */
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
