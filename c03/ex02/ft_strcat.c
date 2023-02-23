/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:17:31 by resilva           #+#    #+#             */
/*   Updated: 2023/02/14 02:05:04 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len_dest(char *dest)
{
	int	x;

	x = 0;
	while (dest[x] != '\0')
		x++;
	return (x);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	y;

	i = 0;
	y = len_dest(dest);
	while (src[i] != '\0')
	{
		dest[y + i] = src[i];
		i++;
	}
	dest[y + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "42";
	char	dest[10] = "Ola ";
	char    src1[] = "42";
        char    dest1[10] = "Ola ";


	ft_strcat(dest, src);
	printf("falsa:%s\n", dest);
	strcat(dest1, src1);
	printf("original:%s\n", dest1);

}*/
