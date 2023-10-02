/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:53:03 by pabernar          #+#    #+#             */
/*   Updated: 2023/08/09 11:27:02 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		count;
	char	*nstr;

	count = 0;
	while (src[count])
		count++;
	nstr = malloc(count + 1);
	if (!nstr)
		return (0);
	count = 0;
	while (src[count])
	{
		nstr[count] = src[count];
		count++;
	}
	nstr[count] = '\0';
	return (nstr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*array_structs;
	int			i;

	i = 0;
	array_structs = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!array_structs)
		return (array_structs);
	while (i < ac)
	{
		array_structs[i].size = ft_strlen(av[i]);
		array_structs[i].copy = ft_strdup(av[i]);
		array_structs[i].str = av[i];
		i++;
	}
	array_structs[i].str = 0;
	return (array_structs);
}
