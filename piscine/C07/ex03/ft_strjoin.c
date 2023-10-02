/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 10:17:59 by pabernar          #+#    #+#             */
/*   Updated: 2023/08/07 14:07:11 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}

int	ft_total_chars(int size, char **strs, char *sep)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	total = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	return (total);
}

void	ft_strcpy(char **dest, char **src, int *j)
{
	int	i;

	i = 0;
	while (src[0][i])
	{
		dest[0][*j] = src[0][i];
		*j += 1;
		i++;
	}
}

void	ft_joined_str(int size, char **strs, char *sep, char **frase)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		ft_strcpy(&frase[0], &strs[i], &j);
		if (i + 1 != size)
			ft_strcpy(&frase[0], &sep, &j);
		i++;
	}
	frase[0][j] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*frase;

	frase = 0;
	if (size <= 0)
	{
		frase = malloc(1);
		frase[0] = '\0';
		return (frase);
	}
	frase = malloc(ft_total_chars(size, strs, sep) + 1);
	if (!frase)
		return (0);
	ft_joined_str(size, strs, sep, &frase);
	return (frase);
}

#include <stdio.h>

int	main(void)
{
	char	**frases;
	char	*sep;
	char	*str;

	sep = " ";
	frases = malloc(sizeof(char *) * 3);
	frases[0] = "The cake";
	frases[1] = "is";
	frases[2] = "a lie!";
	str = ft_strjoin(-1, frases, sep);
	printf("%s", str);
	free(str);
	free(frases);
	return(0);
}
