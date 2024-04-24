/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:47:13 by angemart          #+#    #+#             */
/*   Updated: 2024/02/15 13:59:53 by angemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main(void)
{
	printf("%d", ft_str_is_lowercase("abcdserjsfj"));
	printf("\n%d", ft_str_is_lowercase("alsjjlkAljlk"));
	printf("\n%d", ft_str_is_lowercase("234jlkjlk"));
}
