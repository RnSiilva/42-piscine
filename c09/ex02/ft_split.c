/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 07:58:39 by resilva           #+#    #+#             */
/*   Updated: 2023/02/23 12:09:13 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	char_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	len_word(char *str, char *charset)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (char_sep(str[i], charset) == 0
			&& (char_sep(str[i + 1], charset) == 1))
			words++;
		i++;
	}
	return (words);
}

void	write_word(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (char_sep(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		total_len;
	int		i;
	int		j;
	int		word;

	i = 0;
	word = 0;
	total_len = len_word(str, charset);
	result = (char **)malloc(sizeof(char *) * (total_len + 1));
	result[total_len] = 0;
	while (str[i] != '\0')
	{
		if (char_sep(str[i++], charset) == 1)
		else
		{
			j = 0;
			while (char_sep(str[i + j], charset) == 0)
				j++;
			result[word] = (char *)malloc(sizeof(char) * (j + 1));
			write_word(result[word], str + i, charset);
			i = i + j;
			word++;
		}
	}
	return (result);
}

#include <stdio.h>
#include <stdlib.h>

int     main(void)
{	
	int     i;
	char    string[] = "Hello everybody, keep swimming";
	char    **result = ft_split(string, ", ");
	
	i = 0;
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		i++;
	}
	free(result);
	return (0);
}
