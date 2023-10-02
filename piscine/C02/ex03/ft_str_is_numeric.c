/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 08:45:52 by pabernar          #+#    #+#             */
/*   Updated: 2023/07/25 08:58:57 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
int	ft_str_is_numeric(char *str)
{
	int	numeric;
	int	count;

	numeric = 1;
	count = 0;
	while (*str)
	{
		if (*str < '0' || *str > '9')
			numeric = 0;
		count++;
		str++;
	}
	if ((!count) || numeric)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	*frase;
	char	numeric;

	frase = "";
	numeric = ft_str_is_numeric(frase) + '0';
	write(1, &numeric, 1);
	return (0);
}*/
