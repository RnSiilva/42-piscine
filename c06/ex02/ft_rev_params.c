/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:07:07 by resilva           #+#    #+#             */
/*   Updated: 2023/02/16 19:04:00 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	len;

	i = 1;
	len = argc - 1;
	while (i < argc)
	{
		j = 0;
		while (argv[len][j] != '\0')
		{
			write (1, &argv[len][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
		len--;
	}
	return (0);
}
