/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:48:20 by angemart          #+#    #+#             */
/*   Updated: 2024/02/20 13:49:15 by angemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
	{
		size++;
	}
	return (size);
}

// int main(void)
// {
// 	printf("La longitud de la cadena es: %i\n", ft_strlen("Hola amigos"));
// 	return (0);
// }
