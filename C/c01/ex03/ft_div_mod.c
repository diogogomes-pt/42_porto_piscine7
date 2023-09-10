/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 22:28:15 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/09/01 21:00:03 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 10;
	b = 3;
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("Divisao : %d",*div);
	printf("\nResto : %d",*mod);
}*/
