/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:19:00 by pabernar          #+#    #+#             */
/*   Updated: 2023/07/26 15:49:35 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
char	*ft_strcat(char *dest, char *src)
{
	int	count;

	count = 0;
	while (*dest)
	{
		dest++;
		count++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	*dest = '\0';
	dest -= count;
	return (dest);
}
/*
void	ft_imprimir_string(char *str)
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
	char	original[100];

	original[0] = 'O';
	original[1] = 'l';
	original[2] = 'a';
	original[3] = '!';
	original[4] = '\0';
	ft_imprimir_string(original);
	frase = "The cake is a lie!";
	ft_strcat(original, frase);
	ft_imprimir_string(original);
	return (0);
}*/
