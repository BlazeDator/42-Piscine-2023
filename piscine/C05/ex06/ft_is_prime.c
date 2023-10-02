/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 09:21:06 by pabernar          #+#    #+#             */
/*   Updated: 2023/08/03 09:59:23 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
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
/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_is_prime(0)); //0
	printf("%i\n", ft_is_prime(1)); //0
	printf("%i\n", ft_is_prime(2)); //1
	printf("%i\n", ft_is_prime(3)); //1
	printf("%i\n", ft_is_prime(5)); //1
	printf("%i\n", ft_is_prime(7)); //1
	printf("%i\n", ft_is_prime(11)); //1
	printf("%i\n", ft_is_prime(89)); //1
	printf("%i\n", ft_is_prime(97)); //1
	printf("%i\n\n", ft_is_prime(7393913)); //1

	printf("%i\n", ft_is_prime(100)); //0
	printf("%i\n", ft_is_prime(2500)); //0
	printf("%i\n", ft_is_prime(99)); //0
	printf("%i\n", ft_is_prime(57)); //0
	printf("%i\n", ft_is_prime(63)); //0
	return (0);
}*/
