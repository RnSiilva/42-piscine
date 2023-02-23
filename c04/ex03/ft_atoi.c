/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:13:15 by resilva           #+#    #+#             */
/*   Updated: 2023/02/17 23:51:39 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	poi;
	int	number;

	poi = 0;
	number = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			poi++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10;
		number = number + *str - 48;
		str++;
	}
	if (poi % 2 == 0)
		return (number);
	return (-number);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	string[] = "   -1234ab567";
	printf("%d\n", ft_atoi(string));
	printf("%d", atoi(string));
}
