/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:36:45 by pabernar          #+#    #+#             */
/*   Updated: 2023/07/25 11:03:20 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;

	count = 0;
	if (size)
	{
		while (*src && count < (size - 1))
		{
			*dest = *src;
			dest++;
			src++;
			count++;
		}
		*dest = '\0';
	}
	while (*src)
	{
		count++;
		src++;
	}
	return (count);
}
/*
void	ft_print(char	*frase)
{
	while (*frase)
	{
		write(1, frase, 1);
		frase++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	char	*frase;
	char	copia[5];
	char	total;

	frase = "123456789";
	ft_print(frase);
	total = ft_strlcpy(copia, frase, 5) + '0';
	ft_print(copia);
	write(1, &total, 1);
	return (0);
}*/
