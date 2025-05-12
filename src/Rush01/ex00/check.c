/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 19:55:21 by sdarius-          #+#    #+#             */
/*   Updated: 2025/05/11 23:15:32 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_view_top(int **grid, int col, int size, int expected)
{
	int	max;
	int	visible;
	int	i;

	max = 0;
	visible = 0;
	i = 0;
	while (i < size)
	{
		if (grid[i][col] > max)
		{
			max = grid[i][col];
			visible++;
		}
		i++;
	}
	return (visible == expected);
}

int	check_view_bottom(int **grid, int col, int size, int expected)
{
	int	max;
	int	visible;
	int	i;

	max = 0;
	visible = 0;
	i = size - 1;
	while (i >= 0)
	{
		if (grid[i][col] > max)
		{
			max = grid[i][col];
			visible++;
		}
		i--;
	}
	return (visible == expected);
}

int	check_view_left(int *row, int size, int expected)
{
	int	max;
	int	visible;
	int	i;

	max = 0;
	visible = 0;
	i = 0;
	while (i < size)
	{
		if (row[i] > max)
		{
			max = row[i];
			visible++;
		}
		i++;
	}
	return (visible == expected);
}

int	check_view_right(int *row, int size, int expected)
{
	int	max;
	int	visible;
	int	i;

	max = 0;
	visible = 0;
	i = size - 1;
	while (i >= 0)
	{
		if (row[i] > max)
		{
			max = row[i];
			visible++;
		}
		i--;
	}
	return (visible == expected);
}
