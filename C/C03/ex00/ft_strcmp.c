/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:03:14 by angemart          #+#    #+#             */
/*   Updated: 2024/02/17 17:05:59 by angemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}

int	main(void)
{
	printf("%d", ft_strcmp("Hola", "Holatutu")); 
	printf("\n%d", ft_strcmp("Hola", "Ho"));
	printf("\n%d", ft_strcmp("Ho", "Hola")); 
	printf("\n%d", ft_strcmp("Hola", "Hola")); 
}
