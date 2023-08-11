/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 08:55:39 by pteh              #+#    #+#             */
/*   Updated: 2023/08/11 09:14:32 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	element;

	element = 0;
	if (index < 0)
		element = -1;
	if (index == 0)
		element = 0;
	if (index == 1 || index == 2)
		element = 1;
	if (index > 2)
		element = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (element);
}
/*
int	main(void)
{
	printf("index = 3:%d\n", ft_fibonacci(3));
	printf("index = 4:%d\n", ft_fibonacci(4));
	printf("index = 5:%d\n", ft_fibonacci(5));
	printf("index = 6:%d\n", ft_fibonacci(6));
	printf("index = 7:%d\n", ft_fibonacci(7));
}*/
