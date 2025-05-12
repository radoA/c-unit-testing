/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 22:22:11 by radandri          #+#    #+#             */
/*   Updated: 2025/05/11 23:15:28 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		solve(int **grid, int size, int row, int *input);
int		is_grid_valid(int **grid, int size, int *input);
void	writenbr(char nbr);
int		*inputf(char str[], int size);
void	print(int **array, int size);

int	**init(int size)
{
	int	i;
	int	j;
	int	**array;

	i = -1;
	j = -1;
	array = malloc(size * sizeof(int *));
	while (++i < size)
	{
		array[i] = malloc(size * sizeof(int));
		if (array[i] == NULL)
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	i = -1;
	while (++i < size)
	{
		while (++j < size)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}

void	free_array(int **array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

int	**rush(int **array, int input[])
{
	if (solve(array, 4, 0, input))
		return (array);
	return (NULL);
}

int	main(int argc, char *argv[])
{
	int	**array;
	int	input[16];
	int	i;
	int	j;

	i = -1;
	j = -1;
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while (argv[1][++i] != 0)
		if ((argv[1][i] >= '0' && argv[1][i] <= '4'))
			input[++j] = argv[1][i] - '0';
		else if (argv[1][i] == ' ')
		{
		}
		else
		{
			write(1, "Error\n", 6);
			return (0);
		}
	array = init(4);
	array = rush(array, input);
	if (array)
		print(array, 4);
	else
		write(1, "Error\n", 6);
	free_array(array, 4);
	return (0);
}
