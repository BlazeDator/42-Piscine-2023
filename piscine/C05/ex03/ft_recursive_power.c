/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:59:04 by pabernar          #+#    #+#             */
/*   Updated: 2023/08/10 12:46:07 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	res;	

	i = 0;
	res = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else if (power != 0)
	{
		res = nb * ft_recursive_power(nb, power - 1);
	}
	return (res);
}

#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_recursive_power(3, 2));  //9
	printf("%i\n", ft_recursive_power(5, 2));  //25
	printf("%i\n", ft_recursive_power(3, 10)); //59049
	printf("%i\n", ft_recursive_power(5, 8));  //390625
	printf("%i\n", ft_recursive_power(10, 2)); //100
	printf("%i\n", ft_recursive_power(10, 5)); //100000
	printf("%i\n", ft_recursive_power(-3, 10)); //59049
	printf("%i\n", ft_recursive_power(-5, 8));  //390625
	printf("%i\n", ft_recursive_power(-10, 2)); //100
		
	printf("%i\n", ft_recursive_power(-1193, 0)); //100
}
