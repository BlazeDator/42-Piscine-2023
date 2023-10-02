/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:03:02 by pabernar          #+#    #+#             */
/*   Updated: 2023/08/02 15:04:19 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_compare(char *str, char *to_find)
{
	char	*reset;
	char	*pos;
	int		comp;

	comp = 0;
	reset = to_find;
	while (*str)
	{
		if ((!comp) && *str == *to_find && *to_find)
		{
			pos = str;
			comp = 1;
		}
		if (comp && *str == *to_find)
			to_find++;
		else if (comp && !*to_find)
			return (pos);
		else
		{
			to_find = reset;
			comp = 0;
		}
		str++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*pos;

	if (!*to_find)
		return (str);
	if (!*str)
		return (0);
	pos = ft_compare(str, to_find);
	if (pos)
		return (pos);
	return (0);
}

#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	ft_print(char	*str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	char	*frase;
	char	*teste;

	frase = "The cake is a lie!";
	teste = "ake";
	ft_print(frase);
	ft_print(ft_strstr(frase, teste));
	ft_print(strstr(frase, teste));
	frase = "The cake is a lie!";
        teste = "";
        ft_print(frase);
        ft_print(ft_strstr(frase, teste));
        ft_print(strstr(frase, teste));
	frase = "The cake is a lie!";
        teste = "buttons";
        ft_print(frase);
        printf("%s\n", ft_strstr(frase, teste));
        printf("%s\n", strstr(frase, teste));
	frase = "";
        teste = "";
        ft_print(frase);
        printf("%s|\n", ft_strstr(frase, teste));
        printf("%s|\n", strstr(frase, teste));
	frase = "";
        teste = "buttons";
        ft_print(frase);
        printf("%s\n", ft_strstr(frase, teste));
        printf("%s\n", strstr(frase, teste));
	return (0);
}
