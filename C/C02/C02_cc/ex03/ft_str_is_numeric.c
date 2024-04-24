/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:33:44 by angemart          #+#    #+#             */
/*   Updated: 2024/02/15 13:37:04 by angemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str [i] <= 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main()
{
	char str1[] = "01234567893";
	char str2[] = "021545dfs454";
	char str3[] = "_kjaksjdlsjlkdf,";
	printf("la cadena '%s' es numerica? %d\n", str1, ft_str_is_numeric(str1));
	printf("la cadena '%s' es numerica? %d\n", str2, ft_str_is_numeric(str2));
	printf("la cadena '%s' es numerica? %d\n", str3, ft_str_is_numeric(str3));
	
}
