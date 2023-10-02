/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 09:18:08 by pabernar          #+#    #+#             */
/*   Updated: 2023/08/05 10:12:54 by pabernar         ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	if (min >= max)
	{
		range[0] = 0;
		return (0);
	}
	total = ft_total(min, max);
	range[0] = malloc(sizeof(int) * total);
	if (!range || !range[0])
		return (-1);
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (total);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	total;
	int	*range;

	range = 0;
	i = 0;
	min = -2147483648;
	max = -2147483640;
	total = ft_ultimate_range(&range, min, max);
	while (i < total)
	{
		printf("%i\n", range[i]);
		i++;
	}
	free(range);
	return (0);
}*/
