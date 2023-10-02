/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 08:45:52 by pabernar          #+#    #+#             */
/*   Updated: 2023/07/25 09:16:25 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
int	ft_str_is_printable(char *str)
{
	int	printable;
	int	count;

	printable = 1;
	count = 0;
	while (*str)
	{
		if (*str < ' ' || *str > '~')
			printable = 0;
		count++;
		str++;
	}
	if ((!count) || printable)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	*frase;
	char	printable;

	frase = " \n";
	printable = ft_str_is_printable(frase) + '0';
	write(1, &printable, 1);
	return (0);
}*/
