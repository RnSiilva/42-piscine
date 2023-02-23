/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 01:41:11 by resilva           #+#    #+#             */
/*   Updated: 2023/02/22 11:04:31 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	f;
	int	tmp;

	i = 0;
	f = size - 1;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab [i] = tab [f - i];
		tab [f - i] = tmp;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	tab[6] = {10, 20, 30, 40, 50, 60};
	int	size = 6;

	ft_rev_int_tab(tab, size);
	printf("Inversao: %d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
}

      //x = size - 1; // o peso vem como 6,
     		     // mas o indice que precisamos mostrar eh o 5*/
