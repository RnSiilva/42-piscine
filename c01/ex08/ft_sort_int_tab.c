/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:58:32 by resilva           #+#    #+#             */
/*   Updated: 2023/02/11 00:55:09 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 1;
	while (i < size)
	{
		if (tab[i - 1] > tab[i])
		{
			tmp = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = tmp;
			i = 0;
		}
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	tab[5] = {30, 20, 40, 50, 1};
	int	size = 5;

	ft_sort_int_tab(tab, size);
	printf("Crescente: %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}*/
