/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:30:05 by angemart          #+#    #+#             */
/*   Updated: 2024/02/15 11:30:10 by angemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main() 
{
	char source[] = "This is a test very large string.";
	char destination[30];

    // Copy 10 characters
	ft_strncpy(destination, source, 10);
	printf("Copied 10 characters: %s\n", destination); // Salida: This is a

    // Copy 20 characters (truncates source string)
	ft_strncpy(destination, source, 20);
	printf("Copied 20 characters: %s\n", destination); // Salida: This is a test very

    // Copy 26 characters (adds null terminator at 20th position)
	ft_strncpy(destination, source, 26);
	printf("Copied 26 characters: %s\n", destination); // Salida: This is a test very large
    return (0);
}
