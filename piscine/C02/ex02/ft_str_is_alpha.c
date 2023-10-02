/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 09:38:52 by pabernar          #+#    #+#             */
/*   Updated: 2023/07/24 17:20:34 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
int	ft_str_is_alpha(char *str)
{
	int	count;
	int	alpha;

	count = 0;
	alpha = 1;
	while (*str)
	{
		if ((*str < 'A') || (*str > 'Z' && *str < 'a') || (*str > 'z'))
			alpha = 0;
		count++; 
		str++; 
	}
	if ((!count) || alpha)
		return (1);
	else
		return (0);
}
/*
void	ft_print(char *frase)
{
	while (*frase != '\0')
	{
		write(1, frase, 1);
	}
	write(1, "\n", 1);
}

void	ft_putchar(char *letra)
{
	write(1, letra, 1);
	write(1, "\n", 1);
}

int	main(void)
{
	char	*frase;
	char	alpha;

	frase = "\0";
	alpha = ft_str_is_alpha(frase) + '0';
	ft_putchar(&alpha);
	return (0);
}*/
