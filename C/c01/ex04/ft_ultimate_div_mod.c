/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod (copy).c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 23:39:05 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/08/29 16:31:28 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp1;
	int	temp2;

	temp1 = *a / *b;
	temp2 = *a % *b;
	*a = temp1;
	*b = temp2;
}

int	main(void)
{
	int	i;
	int	j;
	int	*a;
	int	*b;

	i = 10;
	j = 5;
	a = &i;
	b = &j;
	printf("Operacao = %d /", i);
	printf(" %d\n", j);
	ft_ultimate_div_mod(a, b);
	printf("Divisao = %d\n", *a);
	printf("Resto = %d", *b);
}
