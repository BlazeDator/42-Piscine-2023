/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:51:21 by pabernar          #+#    #+#             */
/*   Updated: 2023/08/03 15:26:59 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (count < argc)
	{
		while (argv[count][i])
		{
			write(1, &argv[count][i], 1);
			i++;
		}
		write(1, "\n", 1);
		i = 0;
		count++;
	}
	return (0);
}
