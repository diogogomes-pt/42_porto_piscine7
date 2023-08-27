/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:09:21 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/08/26 21:17:24 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int column;
	int line;

	if (x < 1 || y < 1)
		return ;
	line = 1;
	while (line <= y)
	{
		column = 1;
		while (column <= x)
		{
			if ((column == 1 && line == 1) || (column == x && line == y))
				ft_putchar('A');
			else if ((column == x && line == 1) || (column == 1 && line == y))
				ft_putchar('C');
			else if ((column > 1 && column < x) && (line > 1 && line < y))
				ft_putchar(' ');
			else
				ft_putchar('B');
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
