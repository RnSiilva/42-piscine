/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 22:45:43 by resilva           #+#    #+#             */
/*   Updated: 2023/02/21 05:21:59 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*pt;
	int	size;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	pt = ((int *)malloc(sizeof(int) * (max - min)));
	if (pt == NULL)
	{
		*range = 0;
		return (-1);
	}
	size = max - min;
	i = 0;
	while (min < max)
	{
		pt[i] = min;
		i++;
		min++;
	}
	*range = pt;
	return (size);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*array;
	int	i;
	int	size;

	size = ft_ultimate_range(&array, 11, 23);
	i = 0;
	printf("size: %d\n", size);
	while (i < 12)
	{
		printf("%d ", array[i]);
		i++;
	}

}*/
