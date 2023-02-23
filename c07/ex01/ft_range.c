/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 21:10:34 by resilva           #+#    #+#             */
/*   Updated: 2023/02/21 05:17:50 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*pt;

	if (min >= max)
		return (0);
	pt = ((int *)malloc(sizeof(int) * (max - min)));
	if (pt == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		pt[i] = min;
		min++;
		i++;
	}
	return (pt);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*array;
	int	i;

	i = 0;
	array = ft_range(0, 11);
	while (i < 11)
	{
		printf("%d ", array[i]);
		i++;
	}
	return (0);
}*/
