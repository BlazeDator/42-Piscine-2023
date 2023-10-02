/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:49:19 by pabernar          #+#    #+#             */
/*   Updated: 2023/08/09 11:41:06 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_print(char	*str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	char	c;	

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
		{
			c = nb + '0';
			write(1, &c, 1);
		}
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str)
	{
		ft_print(par->str);
		write(1, "\n", 1);
		ft_putnbr(par->size);
		write(1, "\n", 1);
		ft_print(par->copy);
		write(1, "\n", 1);
		par++;
	}
}
/*
#include <stdlib.h>

int	main(void)
{
	int	count;
	char	**words;
	t_stock_str *tab;

	count = 3;
	words = malloc(sizeof(char *) * count);
	words[0] = "Hello world!";
	words[1] = "BESTIEEE!";
	words[2] = "The cake is a lie";
	tab = ft_strs_to_tab(count, words);
	ft_show_tab(tab);
	return (0);
}*/
