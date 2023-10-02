/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:09:22 by pabernar          #+#    #+#             */
/*   Updated: 2023/07/20 14:31:45 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}
/*
int	main(void)
{
	int	x;
	int	y;
	int	z;

	x = -1;
	y = 0;
	z = 1;
	ft_is_negative(x);
	ft_is_negative(y);
	ft_is_negative(z);
	return (0);
}
*/
