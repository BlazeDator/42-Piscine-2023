/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 09:21:13 by pabernar          #+#    #+#             */
/*   Updated: 2023/07/25 09:41:05 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
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
	char	texto[50];

	frase = "GRANDE pequeno";
	ft_strcpy(frase, texto);
	ft_print(texto);
	ft_strupcase(texto);
	ft_print(texto);
	frase = "pequeno GRANDE";
	ft_strcpy(frase, texto);
	ft_print(texto);
	ft_strcpy(frase, texto);
	ft_print(ft_strupcase(texto));
	return (0);
}*/
