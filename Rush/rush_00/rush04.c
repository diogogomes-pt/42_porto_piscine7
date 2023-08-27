/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:09:21 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/08/27 17:16:36 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	coluna(int x, int y, int line);

void	rush(int x, int y)
{
	int	line;

	if (x < 1 || y < 1)
		return ;
	line = 1;
	while (line <= y)
	{
		coluna(x, y, line);
		line++;
	}
}

void	coluna(int x, int y, int line)
{
	int	column;

	column = 1;
	while (column <= x)
	{
		if (column == x && line == 1 && x > 1)
			ft_putchar('C');
		else if (column == 1 && line == y && y > 1)
			ft_putchar('C');
		else if ((column == 1 && line == 1) || (column == x && line == y))
			ft_putchar('A');
		else if ((column > 1 && column < x) && (line > 1 && line < y))
			ft_putchar(' ');
		else 
			ft_putchar('B');
		column++;
	}
	ft_putchar('\n');
}
