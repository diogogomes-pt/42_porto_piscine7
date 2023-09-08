/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:40:32 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/09/07 16:48:31 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	i = 1;
	c = 0;
	if (argc < 2)
		return (0);
	else
	{
		while (i < argc)
		{
			while (argv[i][c] != '\0')
			{
				putchar(argv[i][c]);
				c++;
			}
			putchar('\n');
			i ++;
			c = 0;
		}
	}
}
