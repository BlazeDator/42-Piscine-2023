/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 09:21:06 by pabernar          #+#    #+#             */
/*   Updated: 2023/08/03 10:17:24 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1 || (nb != 2 && nb % 2 == 0))
		return (0);
	else if (nb == 2)
		return (1);
	while (i < (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (ft_prime(nb))
		return (nb);
	while (!(ft_prime(i)))
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_find_next_prime(0)); //2
	printf("%i\n", ft_find_next_prime(1)); //2
	printf("%i\n", ft_find_next_prime(2)); //2
	printf("%i\n", ft_find_next_prime(3)); //3
	printf("%i\n", ft_find_next_prime(5)); //5
	printf("%i\n", ft_find_next_prime(7)); //7
	printf("%i\n", ft_find_next_prime(11)); //11
	printf("%i\n", ft_find_next_prime(89)); //89
	printf("%i\n", ft_find_next_prime(97)); //97
	printf("%i\n\n", ft_find_next_prime(7393913)); //7393913

	printf("%i\n", ft_find_next_prime(100)); //101
	printf("%i\n", ft_find_next_prime(2500)); //2503
	printf("%i\n", ft_find_next_prime(99)); //101
	printf("%i\n", ft_find_next_prime(57)); //59
	printf("%i\n", ft_find_next_prime(63)); //67
	return (0);
}*/
