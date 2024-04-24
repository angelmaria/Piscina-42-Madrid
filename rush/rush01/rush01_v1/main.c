/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:35:16 by angemart          #+#    #+#             */
/*   Updated: 2024/02/18 15:35:29 by angemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern int	g_grid[6][6];
int		g_solutions;

void	ft_putstr(char *str);
void	build(char *input);
void	print(void);
int		valid(char *input);
int		possible(int x, int y, int n);
void	solve(void);

void	test(int x, int y)
{
	int	n;

	n = 1;
	while (n < 5)
	{
		if (possible(x, y, n))
		{
			g_grid[y][x] = n;
			solve();
			g_grid[y][x] = 0;
		}
		n++;
	}
}

void	solve(void)
{
	int	x;
	int	y;

	if (g_solutions)
		return ;
	y = 1;
	while (y < 5)
	{
		x = 1;
		while (x < 5)
		{
			if (!g_grid[y][x])
			{
				test(x, y);
				return ;
			}
			x++;
		}
		y++;
	}
	g_solutions++;
	print();
}

int		main(int argc, char *argv[])
{
	g_solutions = 0;
	if (argc != 2 || !valid(argv[1]))
		ft_putstr("Error\n");
	else
	{
		build(argv[1]);
		solve();
		if (!g_solutions)
			ft_putstr("Error\n");
	}
	return (0);
}
