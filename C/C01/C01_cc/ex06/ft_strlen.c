/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:43:14 by angemart          #+#    #+#             */
/*   Updated: 2024/02/15 17:43:20 by angemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	
	while(str[i]) {
		i++;
	}
	return(i);
}

int main(void)
{
// char str[] = "Hola mundo";
// int len = ft_strlen(str);
printf("La longitud de la cadena es: %d\n", ft_strlen("Hola mundo"));
}
		 
