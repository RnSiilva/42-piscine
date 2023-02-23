/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:48:27 by resilva           #+#    #+#             */
/*   Updated: 2023/02/11 20:50:16 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 'A') || (*str > 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	string[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	string1[] = "";
	char	*ptr;
	char	*ptr1;

	ptr = string;
	ptr1 = string1;
	printf("%d\n", ft_str_is_uppercase(ptr));
	printf("%d", ft_str_is_uppercase(ptr1));
}*/
