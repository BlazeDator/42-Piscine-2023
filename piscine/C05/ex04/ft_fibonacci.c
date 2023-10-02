/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:25:08 by pabernar          #+#    #+#             */
/*   Updated: 2023/08/03 08:40:20 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index < 2)
	{
		return (index);
	}
	else
		index = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (index);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_fibonacci(-10)); //-1
	printf("%i\n", ft_fibonacci(0)); //0
	printf("%i\n", ft_fibonacci(1)); //1
	printf("%i\n", ft_fibonacci(2)); //1
	printf("%i\n", ft_fibonacci(3)); //2
	printf("%i\n", ft_fibonacci(4)); //3
	printf("%i\n", ft_fibonacci(6)); //8
	printf("%i\n", ft_fibonacci(10));//55
	printf("%i\n", ft_fibonacci(19));//4181
	return (0);
}*/
