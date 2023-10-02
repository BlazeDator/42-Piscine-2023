/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:34:13 by pabernar          #+#    #+#             */
/*   Updated: 2023/07/21 12:02:22 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 100;
	b = 999;
	printf("a - %i \nb - %i\n\n", a, b);
	ft_swap(&a, &b);
	printf("a - %i \nb - %i\n", a, b);
	return (0);
}*/
