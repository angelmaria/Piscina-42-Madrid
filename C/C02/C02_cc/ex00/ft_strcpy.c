/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:33:10 by angemart          #+#    #+#             */
/*   Updated: 2024/02/14 20:35:53 by angemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	source[] = "Hello, world!"; // Fuente
	char	destination[20]; // Destino
	ft_strcpy(destination, source); // Llama funcion ft_strcpy
	printf("Copied string: %s\n", destination); // Imprime el string copiado
	return (0);
}
