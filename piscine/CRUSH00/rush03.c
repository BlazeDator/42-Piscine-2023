/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:26:29 by linda-si          #+#    #+#             */
/*   Updated: 2023/07/23 12:45:46 by pabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_desenhar(int posx, int posy, int x, int y)
{
	if ((posx == 1 && posy == 1) || (posx == 1 && posy == y))
		ft_putchar('A');
	else if ((posx == x && posy == 1) || (posx == x && posy == y)) 
		ft_putchar('C');
	else if ((posx > 1 && posx < x) && (posy == 1 || posy == y))
		ft_putchar('B');
	else if ((posy > 1 && posy < y) && (posx == 1 || posx == x)) 
		ft_putchar('B');
	else
		ft_putchar(' '); 
}

void	rush(int x, int y)
{
	int	posx;
	int	posy;

	if (x > 0 && y > 0)
	{
		posy = 1;
		posx = 1;
		while (posy <= y)
		{
			while (posx <= x)
			{
				ft_desenhar(posx, posy, x, y);
				posx++;
			}
			ft_putchar('\n');
			posx = 1;
			posy++;
		}
	}
}
