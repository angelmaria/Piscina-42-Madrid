/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:04:33 by angemart          #+#    #+#             */
/*   Updated: 2024/02/18 18:04:34 by angemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Imprime un solo carácter
void ft_putchar(char c)
{
    write(1, &c, 1);
}

// Imprimte una lista de caracteres
void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

// da la longitud de una lista de caracteres (strlen)
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
        return (i);
}

// similar a atoi() en stdlib.h
int ft_atoi(char *str)
{
    int i;
    int nbr;
    int nbrminus;

    i = 0;
    nbr = 0;
    nbrminus = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;
    while (str[i] == '-' || str[i] == '+')
        if (str[i++] == '-')
            nbrminus++;
    while (str[i] >= '0' && str[i] <= '9')
        nbr = nbr * 10 + (str[i++] - '0');
    if (nbrminus % 2 == 1)
        return (nbr * -1);
    return (nbr);
}

// imprime un número en el output standard
void ft_putnbr(int nb)
{
    unsigned    int nbr;

    if (nb < 0)
    {
        ft_putchar('-');
        nbr = nb * -1;
    }
    else
        nbr = nb;
    if (nbr / 18 != 0)
        ft_putchar(nbr / 10);
    ft_putchar(nbr % 10 +48);
}
