/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:06:35 by resilva           #+#    #+#             */
/*   Updated: 2023/02/20 17:27:57 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	int *p =(int *) malloc(sizeof(int));
	if (p == NULL)
		printf("Deu ruim, n tem memoria disponivel");
	*p = 1000; // Dando valor para a memoria que foi alocada
	printf("%i\n", *p);
	
	printf("sizeof: %lu\n", sizeof(double)); 
}
