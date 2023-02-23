/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:56:24 by resilva           #+#    #+#             */
/*   Updated: 2023/02/19 17:39:35 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 1)
		return (result = nb * ft_recursive_power(nb, (power - 1)));
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("resultado = %d", ft_recursive_power(5, 2));
	return (0);
}*/
