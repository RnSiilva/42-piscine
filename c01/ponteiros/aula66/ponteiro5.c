/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ponteiro5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:39:22 by resilva           #+#    #+#             */
/*   Updated: 2023/02/07 15:15:27 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	testeVariavel(int x) // Essa funcao recebe uma variavel
			    // Essa funcao faz um copia do valor, ou seja, recebe o valor de x, que no caso eh 1, e dentro desta funcao ela soma +1, mas so faz isso dentro desta funcao
{
	++x;
}
void	testePonteiro(int *pX) // Enquanto essa recebe um endereco de memoria (ou seja, recebe um ponteiro)
			      // N
{
	++*pX;
}

int	main(void)
{
	void testeVariavel(int x);
	void testePonteiro(int *pX);

	int teste = 1;
	int *pTeste = &teste;

	//testeVariavel(teste); // Chamando a funcao, e mandando o valor teste(1)
	testePonteiro(pTeste);
	printf("%i\n", teste);
	return (0);
}	
