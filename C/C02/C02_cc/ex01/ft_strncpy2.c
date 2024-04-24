/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:41:59 by angemart          #+#    #+#             */
/*   Updated: 2024/02/15 11:55:33 by angemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0;

	while(src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return(dest);
}

int main(void)
{
	char source[] = "This is a test string.";
	char destination [20];

	ft_strncpy(destination, source, 10);
	printf("Copied characters: %s\n", destination);
	return (0);
}
