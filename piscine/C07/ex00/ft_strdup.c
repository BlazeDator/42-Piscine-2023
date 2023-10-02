/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 08:53:50 by pabernar          #+#    #+#             */
/*   Updated: 2023/08/07 11:30:08 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

#include <stdio.h>

int	main(void)
{
	char	*frase;
	char	*newstr;

	frase = "hello world!";
	newstr = ft_strdup(frase);
	printf("%s", newstr);
	free(newstr);
	return (0);	
}
