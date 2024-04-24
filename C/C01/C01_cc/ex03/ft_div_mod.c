/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:36:10 by angemart          #+#    #+#             */
/*   Updated: 2024/02/12 14:28:15 by angemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int a;
	int b;
	int mod;
	int div;

	a = 5;
	b = 2;

	printf("a : %d, b : %d\n", a, b);

	ft_div_mod(a, b, &div, &mod);

	printf("a : %d, b : %d, div : %d, mod : %d\n", a, b, div, mod);
}
