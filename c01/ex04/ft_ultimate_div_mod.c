/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 21:03:41 by resilva           #+#    #+#             */
/*   Updated: 2023/02/08 20:49:22 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}
/*
#include <stdio.h>

int	main(void)
{
	int x = 35;
	int y = 3;
	int *div = &x;
	int *mod = &y;
	
	printf("x : %i\n", *div);
	printf("y : %i\n\n", *mod);
	//ft_ultimate_div_mod(&x, &y);
	ft_ultimate_div_mod(div, mod);

	printf("Resultado div x : %i\n", x);
	printf("Resto mod y: %i\n", y);
}*/
