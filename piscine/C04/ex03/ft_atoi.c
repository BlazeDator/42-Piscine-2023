/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:15:53 by pabernar          #+#    #+#             */
/*   Updated: 2023/08/01 16:43:33 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	signs;
	int	num;

	signs = 0;
	num = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signs++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	if (signs % 2 == 1)
		num *= -1;
	return (num);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*frase;
	int		resultado;

	frase = "  \n\n ---+--+1234ab567";
	resultado = ft_atoi(frase);
	printf("%i", resultado);
	return (0);
}*/
