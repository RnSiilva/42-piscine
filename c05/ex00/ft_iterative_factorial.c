/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 01:43:27 by resilva           #+#    #+#             */
/*   Updated: 2023/02/19 17:15:35 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	prod;

	prod = 1;
	i = 0;
	if (nb >= 0)
	{
		while (nb > 0)
		{
			prod = prod * (i + 1);
			i++;
			nb--;
		}
		return (prod);
	}
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("result = %d", ft_iterative_factorial(5));
	return (0);
}*/
