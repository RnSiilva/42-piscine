/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ponteiro3-1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 01:27:52 by resilva           #+#    #+#             */
/*   Updated: 2023/02/07 14:19:21 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int x = 10;
	double y = 20.50;
	char z = 'a';

	int *pX = &x;
	double *pY = &y;
	char *pZ = &z;

	printf("Endereco x = %p - Valor x = %i\n", pX, *pX);
	// Sem asterisco, esta buscando o endereco de memoria
	// Com asterisco, esta buscando o valor do ponteiro
	printf("Endereco y = %p - Valor y = %f\n", pY, *pY);
	printf("Endereco z = %p - Valor z = %c\n\n", pZ, *pZ);

	double soma = *pX + *pY; // Lembrar do asterisco (ponteiro)
	printf("Valor da soma = %f\n", soma);

	//double soma = pX + pY; // Dessa forma estaria somando um endereco de memoria com o outro endereco de memoria, o que n eh possivel
        //printf("Valor da soma = %f\n", soma);
}
