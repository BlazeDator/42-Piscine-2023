/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:38:45 by pabernar          #+#    #+#             */
/*   Updated: 2023/08/01 10:19:40 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
/*
int	main(void)
{
	int	a;

	a = 42;
	ft_putnbr(a);
	write(1, "\n", 1);
	a = 2147483647;
	ft_putnbr(a);
	write(1, "\n", 1);
	a = -2147483648;
	ft_putnbr(a);
	write(1, "\n", 1);
	a = 10;
	ft_putnbr(a);
	write(1, "\n", 1);
	a = 0; 
        ft_putnbr(a);
        write(1, "\n", 1); 	
	a = -42; 
        ft_putnbr(a);
        write(1, "\n", 1);
	a = -10; 
        ft_putnbr(a);
        write(1, "\n", 1); 
	return (0);
}*/
