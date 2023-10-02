/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:05:35 by pabernar          #+#    #+#             */
/*   Updated: 2023/07/31 12:31:38 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	if ((!*s1) && (!*s2))
		return (0);
	if (*s1 > *s2)
		return (*s1 - *s2);
	else if (*s1 < *s2)
		return (*s1 - *s2);
	return (0);
}
/*
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*frase1;
	char	*frase2;

	frase1 = "teste";
	frase2 = "teste";
	printf("%i\n", ft_strcmp(frase1, frase2));
	printf("%i\n\n", strcmp(frase1, frase2));
	frase1 = "TESTe";
	frase2 = "TESTE";
	printf("%i\n", ft_strcmp(frase1, frase2));
	printf("%i\n\n", strcmp(frase1, frase2));
	frase1 = "TESTE";
	frase2 = "TESTe";
	printf("%i\n", ft_strcmp(frase1, frase2));
	printf("%i\n", strcmp(frase1, frase2));
	return (0);
}*/
