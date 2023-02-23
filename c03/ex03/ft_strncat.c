/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:38:48 by resilva           #+#    #+#             */
/*   Updated: 2023/02/14 02:05:45 by resilva          ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	y;
	unsigned int	i;

	i = 0;
	y = len_dest(dest);
	while (src[i] != '\0' && i < nb)
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
	unsigned int	nb;
	char	src[] = "42##";
	char	dest[10] = "Ola ";
	char    src1[] = "42##";
        char    dest1[10] = "Ola ";


	nb = 2;
	ft_strncat(dest, src, nb);
        printf("falsa dest: %s\n", dest);
	strncat(dest1,src1, nb);
        printf("original dest: %s", dest1);
}*/
