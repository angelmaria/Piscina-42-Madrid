/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:07:19 by angemart          #+#    #+#             */
/*   Updated: 2024/02/20 14:34:38 by angemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb > 9)
			ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

// int	main(void)
// {
// 	printf("This should be 47483648\n");
// 	ft_putnbr(47483648);
// 	printf("\nThis should be -2147483648\n");
// 	ft_putnbr(-2147483648);
// 	printf("\nThis should be 0\n");
// 	ft_putnbr(0);
// 	printf("\nThis should be 1\n");
// 	ft_putnbr(1);
// 	printf("\nThis should be 42\n");
// 	ft_putnbr(42);
// 	printf("\n");
// 	return (0);
// }
