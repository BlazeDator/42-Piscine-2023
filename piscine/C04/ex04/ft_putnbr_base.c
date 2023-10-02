/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 13:37:28 by pabernar          #+#    #+#             */
/*   Updated: 2023/08/01 16:46:25 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_base(char *base, int nbr)
{
	int	count;
	int	i;

	count = 0;
	i = 1;
	while (*base)
	{
		if (*base == '-' || *base == '+')
			return (0);
		while (base[i])
		{
			if (*base == base[i])
				return (0);
			i++;
		}
		count++;
		i = count + 1;
		base++;
	}
	if (count <= 1)
		return (0);
	else if (nbr == 0)
	{
		write(1, &base[0], 1);
		return (0);
	}
	return (1);
}

int	ft_strlen(char	*str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

unsigned int	ft_make_it_positive(int nbr)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		return (nbr * -1);
	}
	return (nbr);
}



void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	len;
	unsigned int	arr[100];
	unsigned int	num;
	unsigned int	i;

	if (ft_check_base(base, nbr))
	{
		num = ft_make_it_positive(nbr);
		len = ft_strlen(base);
		i = 0;
		while (num != 0)
		{
			arr[i] = num % len;
			num = num / len;
			if (num > 0)
				i++;
		}
		while (i > 0)
		{
			write(1, &base[arr[i]], 1);
			i--;
			if (i == 0)
				write(1, &base[arr[i]], 1);
		}
	}
}

int	main(void)
{
	char	hex[17] = "01";
	int	x;

	x = 42;
	ft_putnbr_base(x, hex);	
	return (0);
}
