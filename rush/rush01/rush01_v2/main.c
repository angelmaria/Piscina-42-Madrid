/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:55:54 by angemart          #+#    #+#             */
/*   Updated: 2024/02/18 15:55:55 by angemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

int		**args(int argc, char **argv, int *nargs);
void	gen(int **locked, int size);
void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	int		**bord;
	int		size;

	bord = args(argc, argv, &size);
	if (bord != NULL)
	{
		gen(bord, size);
	}
	else
		ft_putstr("Error\n");
}

