/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ponteiro4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:23:12 by resilva           #+#    #+#             */
/*   Updated: 2023/02/07 14:38:08 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	struct horario
	{
		int hora;
		int minuto;
		int segundo;
	};

	struct horario agora, *depois;
	depois = &agora; //o ponteiro depois aponta para o end de memoria de agora (agora eh o nome da estrutura horario)

	//(*depois).hora = 20;
	//(*depois).minuto = 20;
	//(*depois).segundo = 20;
	//ou
	depois->hora = 20;//o ponteiro depois aponta para hora 
	depois->minuto = 20;//o ponteiro depois aponta para minuto
	depois->segundo = 20;//o ponteiro depois aponta para segundo



	printf("%i:%i:%i", agora.hora, agora.minuto, agora.segundo);

}
