/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:49:49 by resilva           #+#    #+#             */
/*   Updated: 2023/02/16 06:45:02 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_lenght(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	base_value(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	conv[32];
	long	numb;
	int		i;
	int		size;

	i = 0;
	size = ft_lenght(base);
	if (base_value(base) == 0)
		return ;
	if (nbr < 0)
	{
		numb = nbr * -1;
		ft_putchar('-');
	}
	else
		numb = nbr;
	while (numb > 0)
	{
		conv[i] = base[numb % size];
		numb /= size;
		i++;
	}
	while (--i >= 0)
		ft_putchar(conv[i]);
}
/*
int	main(void)
{
	ft_putnbr_base(-2147483648, "0123456789abcdef");
	return (0);
}*/
