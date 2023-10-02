/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 08:42:28 by pabernar          #+#    #+#             */
/*   Updated: 2023/08/05 10:05:51 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	odd;
	int	count;

	odd = 1;
	count = 0;
	while (nb > 0)
	{
		nb -= odd;
		odd += 2;
		count++;
	}
	if (nb == 0)
		return (count);
	return (0);
}


#include <stdio.h>

int	main(void)
{
/*
	printf("%i\n", ft_sqrt(0)); //0
	printf("%i\n", ft_sqrt(1)); //1
	printf("%i\n", ft_sqrt(4)); //2
	printf("%i\n", ft_sqrt(9)); //3
	printf("%i\n", ft_sqrt(16)); //4
	printf("%i\n\n", ft_sqrt(25)); //5

	printf("%i\n", ft_sqrt(7)); //0
	printf("%i\n", ft_sqrt(15)); //0
	printf("%i\n", ft_sqrt(24)); //0
*/
	printf("%i\n", ft_sqrt(2147483647)); //0
	printf("%i\n", ft_sqrt(2147483647)); //0
	printf("%i\n", ft_sqrt(2147483647)); //0
	printf("%i\n", ft_sqrt(2147483647)); //0
	printf("%i\n", ft_sqrt(2147483647)); //0
	printf("%i\n", ft_sqrt(2147483647)); //0
	printf("%i\n", ft_sqrt(2147483647)); //0
	printf("%i\n", ft_sqrt(2147483647)); //0
	printf("%i\n", ft_sqrt(2147483647)); //0
	printf("%i\n", ft_sqrt(2147483647)); //0
	return (0);
}
