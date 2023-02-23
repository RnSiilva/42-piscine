/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:06:19 by resilva           #+#    #+#             */
/*   Updated: 2023/02/08 20:38:13 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*#include <stdio.h>

int	main(void)
{
	int x = 10;
	int y = 20;

	printf("Antes da troca: %i e %i\n", x, y);
	ft_swap(&x, &y);
	printf("Depois: %i e %i", x, y);
}*/
