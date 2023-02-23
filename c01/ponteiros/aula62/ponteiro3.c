/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ponteiro3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 01:15:31 by resilva           #+#    #+#             */
/*   Updated: 2023/02/07 01:27:19 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int x = 10; // Essa eh uma forma de criar um inteiro e ja dar um valor

	int x;
	x = 10; // Essa eh uma forma de criar a var int primeiro, e dps dar um valor a ela

	double y = 20.50;
	char z = 'a';

	// Porem para o ponteiro funciona um pouco diferente

	//int *pX; //Ponteiro para x

	//int *pX;
	//*pX = &x;
	// Ao escrever dessa forma, estariamos dizendo que o valor do ponteiro eh igual ao endereco de memoria de x, por exemplo: o endereco de memoria de x eh 20 mil, entao o valor de *pX tbm eh. E nao eh isso que queremos
	///////////////
	//int *pX = &x;

	//int *pX;
	//pX = &x
	// Esse seria o correto, ou tbm: int *pX = &x 
}
