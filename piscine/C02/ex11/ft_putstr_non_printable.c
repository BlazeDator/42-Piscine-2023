/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:45:31 by pabernar          #+#    #+#             */
/*   Updated: 2023/07/27 08:44:31 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *str, int newline)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	if (newline)
		write(1, "\n", 1);
}

void	ft_convert_and_print(char c)
{
	int	acode;

	acode = c;
	if (acode < 16)
		write(1, "0", 1);
	else
		write(1, "1", 1);
	if ((acode >= 10 && acode <= 15) || (acode >= 26 && acode <= 31))
		c = (acode % 16) + 87;
	else
		c = (acode % 16) + '0';
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= ' ' && *str <= '~')
			write(1, str, 1);
		else
		{
			write(1, "\\", 1);
			if (*str == 127)
				ft_print("7f", 0);
			else
				ft_convert_and_print(*str);
		}
		str++;
	}
}
/*
int	main(void)
{
	char	*frase;

	frase = "Coucou\ntu vas bien ?";
	ft_print(frase, 1);
	ft_putstr_non_printable(frase);
	return (0);
}*/
