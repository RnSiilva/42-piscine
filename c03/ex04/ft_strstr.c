/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:36:31 by resilva           #+#    #+#             */
/*   Updated: 2023/02/14 02:06:19 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (to_find[y] == '\0')
	{
		return (str);
	}
	while (str[x] != '\0')
	{
		while (str[x + y] == to_find[y] && str[x + y] != '\0')
		{
			y++;
		}
		if (to_find[y] == '\0')
		{
			return (str + x);
		}
		x++;
		y = 0;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "EU QUERO PANCADAO";
	char	find[] = "QUERO pancadao";
	char    s11[] = "EU QUERO PANCADAO";
        char    find1[] = "QUERO pancadao";


	printf("falsa: %s\n", ft_strstr(s1, find));
	printf("original: %s", strstr(s11, find1));	
	return (0);
}*/
