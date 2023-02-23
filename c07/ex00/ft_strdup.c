/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:28:41 by resilva           #+#    #+#             */
/*   Updated: 2023/02/21 05:29:59 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*np;
	int		i;

	i = 0;
	np = ((char *)malloc(sizeof(char) * ft_strlen(src) + 1));
	if (np == NULL)
		return (0);
	while (src[i] != '\0')
	{
		np[i] = src[i];
		i++;
	}
	np[i] = '\0';
	return (np);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "Xablau";
	printf("Falsa: %s\n", ft_strdup(src));
	printf("Original: %s", strdup(src));
	return (0);
}*/
