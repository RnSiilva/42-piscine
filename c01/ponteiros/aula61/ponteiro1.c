/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ponteiro.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 21:42:38 by resilva           #+#    #+#             */
/*   Updated: 2023/02/07 00:57:30 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int x;
	x = 10;

	int *ponteiro; // ate entao nao esta apontando para lugar nenhum
	ponteiro = &x; //agr o ponteiro eh igual ao espaco de memoria da var x

	printf("Endereco da var x = %p\n", &x);
	printf("Valor da var x = %i\n", *ponteiro); // Com o asterisco eu acesso o valor daquela memoria que esta apontando
	printf("Endereco de memoria = %p\n", ponteiro);


	return (0);

	//printf("%p\n", &x) // Isso mostra o endereco de memoria da var x
			    // o &x pede para ver o endereco de memoria

	//printf("%i\n", *ponteiro); // Traz o valor 10, pq o ponteiro esta apontando para o endereco da memoria da variavel x, e isto traz o valor da variavel x(que eh 10)
	//
	//printf("%p\n", ponteiro); // Caso tire o *, pedindo pra imprimir somente o ponteiro, ira ter como resultado o endereco da memoria 
}

