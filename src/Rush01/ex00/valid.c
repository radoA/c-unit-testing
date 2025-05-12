/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 19:56:54 by sdarius-          #+#    #+#             */
/*   Updated: 2025/05/11 23:16:57 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_view_top(int **grid, int col, int size, int expected);
int	check_view_bottom(int **grid, int col, int size, int expected);
int	check_view_left(int *row, int size, int expected);
int	check_view_right(int *row, int size, int expected);

int	is_valid_row(int *row, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (row[i] == row[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_valid_col(int **grid, int current_row, int col, int value)
{
	int	i;

	i = 0;
	while (i < current_row)
	{
		if (grid[i][col] == value)
			return (0);
		i++;
	}
	return (1);
}

int	is_grid_valid(int **grid, int size, int *input)
{
	int	i;
	int	*toprow;
	int	*bottomrow;
	int	*colleft;
	int	*colright;
	int	is_valid;

	i = -1;
	toprow = &input[0];
	bottomrow = &input[4];
	colleft = &input[8];
	colright = &input[12];
	is_valid = 1;
	while (++i < size)
	{
		if (!check_view_left(grid[i], size, colleft[i]))
			is_valid = is_valid && 0;
		if (!check_view_right(grid[i], size, colright[i]))
			is_valid = is_valid && 0;
		if (!check_view_top(grid, i, size, toprow[i]))
			is_valid = is_valid && 0;
		if (!check_view_bottom(grid, i, size, bottomrow[i]))
			is_valid = is_valid && 0;
	}
	return (is_valid);
}
