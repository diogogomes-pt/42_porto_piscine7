/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 23:09:45 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/09/07 19:08:27 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	cmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

void	putchar(char c)
{
	write (1, &c, 1);
}

void	print(int argc, char **argv)
{
	int	i;
	int	c;

	i = 1;
	c = 0;
	if (argc > 1)
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

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			tmp = argv[i];
			if (cmp(argv[i], argv[j]) > 0)
			{
				argv[i] = argv[j];
				argv[j] = tmp;
			}
			j++;
		}
		i++;
	}
	print(argc, argv);
}
