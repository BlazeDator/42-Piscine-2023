/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:00:12 by pabernar          #+#    #+#             */
/*   Updated: 2023/07/27 13:12:34 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}
/*
int	main(void)
{
	char	*frase;
	int		size;
	char		cs;

	frase = "123456";
	size = ft_strlen(frase);
	cs = size + '0';
	write(1, &cs, 1);
	return (0);
}*/
