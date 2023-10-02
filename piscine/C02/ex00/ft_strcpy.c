/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 08:07:40 by pabernar          #+#    #+#             */
/*   Updated: 2023/07/24 08:26:55 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		count++;
	}
	*dest = '\0';
	dest -= count;
	return (dest);
}
/*
void	ft_imprimir_string(char *frase)
{
	while (*frase != '\0')
	{
		write(1, frase, 1);
		frase++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	char	*frase;
	char	novafrase[50];

	frase = "Hello World!";
	ft_imprimir_string(frase);
	ft_strcpy(novafrase, frase);
	ft_imprimir_string(novafrase);
	ft_imprimir_string(ft_strcpy(novafrase, frase));
	return (0);
}*/
