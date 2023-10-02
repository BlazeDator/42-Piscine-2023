/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 08:36:11 by pabernar          #+#    #+#             */
/*   Updated: 2023/07/31 16:29:16 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_count_signs(char *str, int *signs)
{
	while (*str)
	{
		if (*str == '-' || *str == '+' || *str == ' ')
		{
			if (*str == '-')
				*signs += 1;
			str++;
		}
		else
			return (str);
	}
	return (str);
}

int	ft_check_base(char *base)
{
	int	count;
	int	i;

	count = 0;
	i = 1;
	while (*base)
	{
		if (*base == '-' || *base == '+')
			return (0);
		while (base[i])
		{
			if (*base == base[i])
				return (0);
			i++;
		}
		count++;
		i = count + 1;
		base++;
	}
	if (count <= 1)
		return (0);
	return (1);
}

int	ft_strlen(char	*str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

int	ft_base_place(char c, char *base, int sizes, int i)
{
	int	count;
	int	sizeb;
	int	j;
	int	num;

	count = 0;
	j = 0;
	sizeb = ft_strlen(base);
	num = 1;
	while (*base)
	{
		if (c == *base)
		{
			while (j < sizes - i - 1)
			{
				num *= sizeb;
				j++;
			}
			return (count * num);
		}
		count++;
		base++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	signs;
	int	sizes;
	int	sum;
	int	i;

	signs = 0;
	sum = 0;
	i = 0;
	if (ft_check_base(base))
	{
		str = ft_count_signs(str, &signs);
		sizes = ft_strlen(str);
		while (str[i])
		{
			sum += ft_base_place(str[i], base, sizes, i);
			i++;
		}
		if (signs % 2 == 1 && sum > 0)
			sum *= -1;
		else if (signs % 2 == 0 && sum < 0)
			sum *= -1;
		return (sum);
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	*str = "ff";
	char	*base = "0123456789abcdef";
	int	num;

	printf("%s\n", str);
	num = ft_atoi_base(str, base);
	printf("%i\n", num);
	return (0);
}
