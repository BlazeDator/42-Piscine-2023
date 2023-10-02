/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 12:57:40 by pabernar          #+#    #+#             */
/*   Updated: 2023/07/24 15:04:06 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *n1, int *n2)
{
	int	seguro;

	seguro = *n1;
	*n1 = *n2;
	*n2 = seguro;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	changes;
	int	count;

	changes = 0;
	count = 0;
	if (size > 1)
	{
		while (count < (size - 1))
		{
			if (*tab > *(tab + 1))
			{
				ft_swap(tab, (tab + 1));
				changes = 1;
			}
			tab++;
			count++;
		}
		tab = tab - (size - 1);
	}
	if (changes)
		ft_sort_int_tab(tab, size);
}

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
	int	numeros[25];
	int	numints;	
	int	index;
	int	valor;
	int	count;

	numints = 25;
	index = numints - 1;
	count = 0;
	valor = numints;
	while (count < (numints / 2))
	{
		numeros[count] = valor;
		valor--;
		numeros[index] = valor;
		valor--;
		index--;
		count++;
	}
	if (numints % 2 != 0)
		numeros[count] = valor;
	ft_imprimir_array(&numeros[0], numints);
	ft_sort_int_tab(&numeros[0], numints);
	ft_imprimir_array(&numeros[0], numints);
	return (0); 
}
