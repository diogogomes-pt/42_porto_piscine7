/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:49:22 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/09/07 17:19:22 by dgomes-a         ###   ########.fr       */
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

	i = 0;
	while (argc != 1)
	{
		while (argv[argc - 1][i] != '\0')
		{
			putchar(argv[argc - 1][i]);
			i++;
		}
		putchar('\n');
		i = 0;
		argc --;
	}
}
