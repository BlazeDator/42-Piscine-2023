/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:49:31 by pabernar          #+#    #+#             */
/*   Updated: 2023/08/03 17:32:43 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	if ((!*s1) && (!*s2))
		return (0);
	if (*s1 > *s2)
		return (*s1 - *s2);
	else if (*s1 < *s2)
		return (*s1 - *s2);
	return (0);
}

void	ft_swap(char **matrix, int num)
{
	char	*temp;

	temp = matrix[num];
	matrix[num] = matrix[num + 1];
	matrix[num + 1] = temp;
}

void	ft_print_matrix(char **matrix, int size)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (count < size)
	{
		while (matrix[count][i])
		{
			write(1, &matrix[count][i], 1);
			i++;
		}
		write(1, "\n", 1);
		i = 0;
		count++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	size;

	size = argc;
	i = 1;
	while (argc > 1)
	{
		i = 1;
		while (i < (argc - 1))
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				ft_swap(argv, i);
			i++;
		}
		argc -= 1;
	}
	ft_print_matrix(argv, size);
	return (0);
}
