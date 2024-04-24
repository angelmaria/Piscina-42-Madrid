/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:47:52 by angemart          #+#    #+#             */
/*   Updated: 2024/02/15 13:32:00 by angemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_str_is_alpha(char *str)
{
	int i;
	
	i = 0;
	if (!str[i])
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

int main(void)
{
	char str1[] = "Hello";
	char str2[] = "H1ello";
	char str3[] = "";

	printf("Is '%s' alphabetic? %d\n", str1, ft_str_is_alpha(str1));
	printf("Is '%s' alphabetic? %d\n", str2, ft_str_is_alpha(str2));
	printf("Is '%s' alphabetic? %d\n", str3, ft_str_is_alpha(str3));
}
