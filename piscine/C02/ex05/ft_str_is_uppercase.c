/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 08:45:52 by pabernar          #+#    #+#             */
/*   Updated: 2023/07/25 09:05:43 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
int	ft_str_is_uppercase(char *str)
{
	int	uppercase;
	int	count;

	uppercase = 1;
	count = 0;
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
			uppercase = 0;
		count++;
		str++;
	}
	if ((!count) || uppercase)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	*frase;
	char	uppercase;

	frase = "";
	uppercase = ft_str_is_uppercase(frase) + '0';
	write(1, &uppercase, 1);
	return (0);
}*/
