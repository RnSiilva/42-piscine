/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:41:51 by resilva           #+#    #+#             */
/*   Updated: 2023/02/21 20:08:53 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_total(int size, int total_len, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
		total_len = total_len + ft_strlen(strs[i++]);
	total_len = total_len + ((size - 1) * ft_strlen(sep)) + 1;
	return (total_len);
}

char	*ft_conct(int size, char **strs, char *sep)
{
	int		i;
	int		conct;
	int		total_len;
	char	*result;

	total_len = 0;
	total_len = ft_total(size, total_len, strs, sep);
	result = ((char *)malloc(sizeof(char) * total_len));
	i = 0;
	if (result != NULL)
	{
		while (i < size)
		{
			ft_strcpy(result + conct, strs[i]);
			conct = conct + ft_strlen(strs[i]);
			if (i < (size - 1))
			{
				ft_strcpy(result + conct, sep);
				conct = conct + ft_strlen(sep);
			}
			i++;
		}
		result[total_len - 1] = '\0';
	}
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	result = ft_conct(size, strs, sep);
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*strs[] = {"Salve", "salve", "mano", "brown", "!!"};
	char	*sep = " ";
	char	*nova_str = ft_strjoin(3, strs, sep);

	printf("%s", nova_str);
	return (0);
}*/
