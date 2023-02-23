/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:25:19 by resilva           #+#    #+#             */
/*   Updated: 2023/02/16 05:11:07 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_puthex(unsigned char c)
{
	char	*decimais;

	decimais = "0123456789abcdef";
	ft_putchar(decimais[c / 16]);
	ft_putchar(decimais[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str == 127)
		{
			ft_putchar('\\');
			ft_puthex(*str);
		}
		else
			ft_putchar(*str);
		str++;
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("Coco\nut blabla");
	ft_putchar('\n');
	ft_putstr_non_printable("Coconut blabla");
	ft_putchar('\n');
	ft_putstr_non_printable("");
}*/
