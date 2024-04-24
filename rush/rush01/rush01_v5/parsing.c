/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:04:43 by angemart          #+#    #+#             */
/*   Updated: 2024/02/18 18:04:44 by angemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdlib.h>

int check(int ac, char **av)
{
    if (ac != 2)
        return (1);
    if (ft_strlen(av[1]) != 31)
        return (1);
}

int *get_numbers(char *str)
{
    int i;
    int j;
    int *tab;

    if(!(tab = malloc(sizeof(int) * 16)))
        return (0);
    i = -1;
    j = 0;
    while (str[++i] != '\0')
        if (str[i] >= '0' && str[i] < '9')
            tab[j++] = ft_atoi(str + 1);
    return (tab);
}
