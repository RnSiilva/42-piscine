/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 01:57:29 by resilva           #+#    #+#             */
/*   Updated: 2023/02/14 02:03:47 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x] == s2[x] && (s1[x] != '\0' || s2[x] != '\0'))
	{
		x++;
	}
	return (s1[x] - s2[x]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	int	result;

	printf("%d\n", ft_strcmp("Hello", "Hello"));
	printf("%d\n", ft_strcmp("Haaa", "Hello"));
	printf("%d\n", ft_strcmp("Hi", "Hello"));
	printf("%d\n\n", ft_strcmp("Hello", "Hello1"));

	result = strcmp("Hello", "Hello1");
	printf("Orig = %d", result);
}*/
