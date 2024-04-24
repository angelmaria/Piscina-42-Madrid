/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leerFichero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:49:23 by angemart          #+#    #+#             */
/*   Updated: 2024/02/25 15:04:54 by angemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main (void)
{
	int fd;
	char buff[50];
	ssize_t nr_bytes;

	fd = open("/Users/angemart/Desktop/piscina/rush/rush02/init.h", O_RDONLY);

	if (fd == -1)
	{
		printf("Error al abrir el archivo \n");
	}
	else
	{
		nr_bytes = read(fd, buff, 45);
		close(fd);
		if (nr_bytes == 0)
		{
			printf("archivo vacio \n");
		}
		else
		{
			printf("El número de caracteres es %d, contenido: %s \n", (int)nr_bytes, buff);
		}

	}
	return(0);
}
