/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:05:35 by pabernar          #+#    #+#             */
/*   Updated: 2023/08/01 16:31:57 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*frase1;
	char	*frase2;
	char	c;
	char	h;

	frase1 = "teste";
	frase2 = "teste";
	printf("%i\n", ft_strncmp(frase1, frase2, 3));
	printf("%i\n\n", strncmp(frase1, frase2, 3));
	frase1 = "TESTe";
	frase2 = "TESTE";
	printf("%i\n", ft_strncmp(frase1, frase2, 5));
	printf("%i\n\n", strncmp(frase1, frase2, 5));
	frase1 = "TESTE";
	frase2 = "TESTe";
	printf("%i\n", ft_strncmp(frase1, frase2, 4));
	printf("%i\n\n", strncmp(frase1, frase2, 4));
	frase1 = "TESTEeeee";
        frase2 = "TESTe";
        printf("%i\n", ft_strncmp(frase1, frase2, 6));
        printf("%i\n\n", strncmp(frase1, frase2, 6));
	frase1 = "TES";
        frase2 = "TES";
        printf("%i\n", ft_strncmp(frase1, frase2, 4));
        printf("%i\n\n", strncmp(frase1, frase2, 4));
	frase1 = "TESTe";
        frase2 = "TESTeeeeee";
        printf("%i\n", ft_strncmp(frase1, frase2, 10));
        printf("%i\n\n", strncmp(frase1, frase2, 10));
	frase1 = "TESTE";
        frase2 = "TESTe";
        printf("%i\n", ft_strncmp(frase1, frase2, 0));
        printf("%i\n\n", strncmp(frase1, frase2, 0));
	frase1 = "TESTE";
        frase2 = "TESTe";
        printf("%i\n", ft_strncmp(frase1, frase2, -1));
        printf("%i\n\n", strncmp(frase1, frase2, -1));
	frase1 = "";
        frase2 = "TESTe";
        printf("%i\n", ft_strncmp(frase1, frase2, 4));
        printf("%i\n\n", strncmp(frase1, frase2, 4));
	c = -50;
	h = -55;
        printf("%i\n", ft_strncmp(&c, &h, 4));
        printf("%i\n\n", strncmp(&c, &h, 4));
	frase1 = "123";
        frase2 = "123";
        printf("%i\n", ft_strncmp(frase1, frase2, 10));
        printf("%i\n\n", strncmp(frase1, frase2, 10));
	frase1 = "TESTE";
        frase2 = "";
        printf("%i\n", ft_strncmp(frase1, frase2, 4));
        printf("%i\n", strncmp(frase1, frase2, 4));
	return (0);
}*/
