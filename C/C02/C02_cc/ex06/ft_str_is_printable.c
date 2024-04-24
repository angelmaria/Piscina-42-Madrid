/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:17:33 by angemart          #+#    #+#             */
/*   Updated: 2024/02/15 14:41:20 by angemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str)
{
	int i;
	
	i = 0;

	while(str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main(void)
{
	printf("%d", ft_str_is_printable("absASLAJCASJLD%"));	
	printf("\n%d", ft_str_is_printable("\n\t\v\f"));
}
