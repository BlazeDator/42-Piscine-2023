/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 09:21:13 by pabernar          #+#    #+#             */
/*   Updated: 2023/07/27 08:42:22 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
int	ft_is_alphabetical(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

int	ft_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

void	ft_make_lowercase(char *frase)
{
	while (*frase)
	{
		if (!ft_is_lowercase(*frase) && ft_is_alphabetical(*frase))
			*frase += 32;
		frase++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	count;
	int	word;

	count = 0;
	word = 0;
	ft_make_lowercase(str);
	while (*str)
	{
		if ((!word) && (ft_is_alphabetical(*str) || ft_is_numeric(*str)))
		{
			word = 1;
			if (ft_is_alphabetical(*str) && ft_is_lowercase(*str))
				*str -= 32;
		}
		if (word && (!(ft_is_alphabetical(*str) || ft_is_numeric(*str))))
			word = 0;
		str++;
		count++;
	}
	str -= count;
	return (str);
}
/*
void	ft_print(char *frase)
{
	while (*frase)
	{
		write(1, frase, 1);
		frase++;
	}
	write(1, "\n", 1);
}

void	ft_strcpy(char *frase, char *nova)
{
	while (*frase)
	{
		*nova = *frase;
		frase++;
		nova++;
	}
	*nova = '\0';
}

int	main(void)
{
	char	*frase;
	char	texto[100];

	frase = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcpy(frase, texto);
	ft_print(texto);
	ft_strcapitalize(texto);
	ft_print(texto);
	frase = "experiencia12353242642532423EXPERIENCIA      ok";
	ft_strcpy(frase, texto);
	ft_print(texto);
	ft_print(ft_strcapitalize(texto));
	return (0);
}*/
