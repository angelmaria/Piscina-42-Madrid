/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:09:04 by angemart          #+#    #+#             */
/*   Updated: 2024/02/17 17:13:12 by angemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (*s1 && *s2 && counter < n)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		counter++;
	}
	if (counter == n)
		return (0);
	else
		return (s1[0] - s2[0]);
}

int main(void)
{
	printf("%d", ft_strncmp("Hello", "Hello World", 8));
}
