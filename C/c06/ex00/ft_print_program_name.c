/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:29:03 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/09/07 15:39:14 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc != 0)
	{
		i = 0;
		while (argv[0][i] != '\0')
		{
			putchar(argv[0][i]);
			i++;
		}
		putchar('\n');
	}
	else
		return (0);
}
