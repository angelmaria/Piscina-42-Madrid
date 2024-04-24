/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:03:55 by angemart          #+#    #+#             */
/*   Updated: 2024/02/15 15:26:06 by angemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str)
{
	int i;
	
	i = 0;
	while(str[i] != '\0')
	{
		if((str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int main(void)
{
	char string[] = "Hola AMIGO!";
	printf("%s", ft_strlowcase(string));
}
