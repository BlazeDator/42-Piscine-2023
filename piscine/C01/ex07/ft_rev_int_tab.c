/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:37:46 by pabernar          #+#    #+#             */
/*   Updated: 2023/07/22 12:52:00 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	primeiro;
	int	ultimo;
	int	index;

	count = 0;
	index = size - 1;
	while (count < (size / 2))
	{
		primeiro = *tab;
		tab += index; 
		ultimo = *tab;
		*tab = primeiro;
		tab -= index;
		*tab = ultimo;
		tab++;
		index -= 2; 
		count++;
	}
}
/*
void	ft_imprimir_array(int *tab, int size)
{
	int	count;	

	count = 0;
	while (count < size)
	{
		printf("[%i]", *tab);
		tab++;
		count++;
	}
	printf("\n");
}

int	main(void)
{
	int	numeros[20];
	int	numints;
	int	valor;
	int	count;

	numints = 20;
	valor = 1;
	count = 0;
	while (count < numints)
	{
		numeros[count] = valor;
		valor++;
		count++;
	}
	ft_imprimir_array(&numeros[0], numints);
	ft_rev_int_tab(&numeros[0], numints);
	ft_imprimir_array(&numeros[0], numints);
	return (0);
}*/
