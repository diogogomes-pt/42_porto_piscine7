/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:28:20 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/09/01 21:09:44 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

/*int	main(void)
{
	int s;
	int m[] = {1, 2, 3, 4, 5, 6, 7};
	
	s = 7;
	ft_rev_int_tab(m, s);
	for (int i = 0; i < s; i++) 
	{
		printf("%d ", m[i]);
	}
    	return 0;
}*/
