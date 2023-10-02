/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 08:45:52 by pabernar          #+#    #+#             */
/*   Updated: 2023/07/25 09:03:31 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
int	ft_str_is_lowercase(char *str)
{
	int	lowercase;
	int	count;

	lowercase = 1;
	count = 0;
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
			lowercase = 0;
		count++;
		str++;
	}
	if ((!count) || lowercase)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	*frase;
	char	lowercase;

	frase = "";
	lowercase = ft_str_is_lowercase(frase) + '0';
	write(1, &lowercase, 1);
	return (0);
}*/
