/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:27:30 by resilva           #+#    #+#             */
/*   Updated: 2023/02/05 22:30:20 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(int f, int s)
{
	ft_putchar(f / 10 + 48);
	ft_putchar(f % 10 + 48);
	ft_putchar(' ');
	ft_putchar(s / 10 + 48);
	ft_putchar(s % 10 + 48);
	if (f != 98 || s != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	fir;
	int	sec;

	fir = 0;
	sec = 0;
	while (fir <= 99)
	{
		sec = fir + 1;
		while (sec <= 99)
		{
			ft_print_comb(fir, sec);
			sec++;
		}
		fir++;
	}
}
