/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ponteiro2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 00:59:20 by resilva           #+#    #+#             */
/*   Updated: 2023/02/07 01:14:40 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int	main(void)
{
	int x = 10;
	int *ponteiro; // Ate entao nao aponta para lugar nenhum
	ponteiro = &x; // Agora ele aponta para o endereco de memoria da var x 

	int y = 20;
	*ponteiro = y; // O valor do ponteiro, sera igual a y
		      // Este ponteiro apontou no endereco de memoria de x, e falou que o valor que contem la, sera igual ao de y
		      // Esta eh a linha que altera o valor de x

	printf("%i %i\n", x, y); // Parece que ira imprimir 10 20, porem imprime 20 20, pois *ponteiro = y; eh resposavel por pegar o valor de y e colocar no endereco de memoria do x, mudando assim o valor de x



//	int x = 10;
//      int y = x;

//      x = 20;

//      printf("%i %i\n", x, y); // Aqui fazemos um swap, uma troca de valores, o valor que era de x nos passamos para y, e x recebe um novo valor
}
