/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 08:28:04 by pabernar          #+#    #+#             */
/*   Updated: 2023/08/02 16:04:19 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && *src != '\0')
	{
		*dest = *src;
		count ++;
		src++;
		dest++;
	}
	while (count < n)
	{
		*dest = '\0';
		count++;
		dest++;
	}
	dest -= count;
	return (dest);
}

void	ft_print(char *frase)
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

	frase = "The cake is a lie!";
	ft_print(frase);
	ft_strncpy(novafrase, frase, 8);
	ft_print(novafrase);
	ft_print(ft_strncpy(novafrase, frase, 30));
	return (0);
}
