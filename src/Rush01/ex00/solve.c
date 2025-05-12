/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 19:54:10 by sdarius-          #+#    #+#             */
/*   Updated: 2025/05/11 23:15:23 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_grid_valid(int **grid, int size, int *input);
int		is_valid_col(int **grid, int current_row, int col, int value);
int		is_valid_row(int *row, int size);
void	writenbr(char nbr);

int	solve(int **grid, int size, int row, int *input)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	temp[4] = {0};
	int	col;
	int	i;

	if (row == size)
		return (is_grid_valid(grid, size, input));
	a = 0;
	while (++a <= size)
	{
		b = 0;
		while (++b <= size)
		{
			c = 0;
			while (++c <= size)
			{
				d = 1;
				while (d <= size)
				{
					temp[0] = a;
					temp[1] = b;
					temp[2] = c;
					temp[3] = d;
					if (!is_valid_row(temp, size))
					{
						d++;
						continue ;
					}
					col = 0;
					while (col < size)
					{
						if (!is_valid_col(grid, row, col, temp[col]))
							break ;
						col++;
					}
					if (col < size)
					{
						d++;
						continue ;
					}
					i = -1;
					while (++i < size)
						grid[row][i] = temp[i];
					if (solve(grid, size, row + 1, input))
						return (1);
					i = -1;
					while (++i < size)
						grid[row][i] = 0;
					d++;
				}
			}
		}
	}
	return (0);
}

void	print(int **array, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			writenbr(array[i][j]);
			if (j < size - 1)
				write(1, " ", 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}
