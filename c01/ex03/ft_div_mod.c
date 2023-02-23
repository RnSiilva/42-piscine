/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:25:19 by resilva           #+#    #+#             */
/*   Updated: 2023/02/08 20:44:55 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
//#include <stdio.h>

/*int	main(void)
{
	int x = 10;
	int y = 3;
	int div = 0;
	int mod = 0;

	printf("X: %i\n", x);
	printf("Y: %i\n", y);

	ft_div_mod(x, y, &div, &mod);
	printf("Resultado div: %i\n", div);
	printf("Resto mod: %i\n", mod);
	printf("X: %i\n", x);
        printf("Y: %i", y);
}*/
	//ou
/*	int     main(void)
{      
        int x = 10;
        int y = 3;
        int *div = &x;
        int *mod = &y;
	
	printf("X: %i\n", x);
	printf("Y: %i\n", y);

	ft_div_mod(x, y, div, mod);
	printf("Resultado div: %i\n", *div);
	printf("Resto mod: %i\n", *mod);
	printf("X: %i\n", x);
        printf("Y: %i", y);
}*/
