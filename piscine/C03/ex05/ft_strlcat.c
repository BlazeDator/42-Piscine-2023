/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:43:06 by pabernar          #+#    #+#             */
/*   Updated: 2023/08/01 16:35:51 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char	*str)
{
	unsigned int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	sizecpy;
	unsigned int	src_len;		

	i = 0;
	src_len = ft_strlen(src);
	sizecpy = size;
	while (dest[i] && sizecpy > 0)
	{
		sizecpy--;
		i++;
	}
	while (sizecpy > 1 && *src)
	{
		dest[i] = *src;
		i++;
		src++;
		sizecpy--;
	}
	if (sizecpy >= 1)
		dest[i] = '\0';
	if (size < ft_strlen(dest))
		return (size + src_len);
	else
		return (ft_strlen(dest) + src_len);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*frase;
	unsigned int	size;
	int	resultado;

	frase = "1234567890";
	char fnova[100] = "pow";
	size = 0;
	printf("%s\n", frase);
	printf("%s\n", fnova);
	resultado = ft_strlcat(fnova, frase, size);
	printf("%s\n", fnova);
	printf("%i\n", resultado);
	return (0);
}*/
