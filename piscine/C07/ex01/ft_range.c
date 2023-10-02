/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 09:18:08 by pabernar          #+#    #+#             */
/*   Updated: 2023/08/05 10:01:23 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_total(int min, int max)
{
	int	total;

	total = 0;
	if (min == -2147483648)
	{
		total++;
		min += 1;
	}
	if (min < 0 && max < 0)
		total += (min * -1) - (max * -1);
	else if (min < 0 && max > 0)
		total += (min * -1) + max;
	else
		total += max - min;
	return (total);
}

int	*ft_range(int min, int max)
{
	int	*array;
	int	total;
	int	i;

	array = 0;
	total = 0;
	i = 0;
	if (min >= max)
		return (array);
	total = ft_total(min, max);
	array = malloc(sizeof(int) * total);
	if (!array)
		return (0);
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	*array;

	i = 0;
	min = -2147483648;
	max = -2147483640;
	array = ft_range(min, max);
	while (i < ft_total(min, max))
	{
		printf("%i\n", array[i]);
		i++;
	}
	free(array);
	return (0);
}*/
