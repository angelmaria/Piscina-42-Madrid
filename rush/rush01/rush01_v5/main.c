/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:03:54 by angemart          #+#    #+#             */
/*   Updated: 2024/02/18 18:04:01 by angemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int solve(int tab[4][4], int entry[16], int pos)
{
    int size;

    if(pos == 16)
        return (1);
    size = 0;
    while (++size <= 4)
    {
        // comprobar si el número que quiero colocar es correcto
        if(check_double(tab, pos, size) == 0)
        {
            // el signo dividir se refiere a las filas y el modulo a las columnas
            tab[pos / 4][pos % 4] = size;
            // comprobar si el tab es correcto con el nuevo número
            if(check_case(tab, pos, entry) == 0)
            {
                // comprobar siguiente posibilidad
                if(solve(tab, entry, pos +1) == 1)
                    return (1);
            }
            else
                tab[pos / 4][pos % 4] = 0;
        }
    }
    // no encontró ninguna solución
    return (0);
}

void display_solution(int tab[4][4])
{
    int i;
    int j;

    i = -1;
    while (++i < 4)
    {
        j = -1;
        while (++j < 4)
        {
            ft_putchar(tab[i][j]);
            ft_putchar(' ');
        }
        ft_putchar('\n');
    }
}

int main(int ac, char **av)
{
    int tab[4][4] = {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };
    int *entry;

    if (check(ac, av) == 1)
        return (0);
    entry = get_numbers(av[1]);

    if (solve(tab, entry, 0) == 1)
        display_solution(tab);
    else
        ft_putstr("No se ha encontrado ninguna solución\n");
    return (0);
}
