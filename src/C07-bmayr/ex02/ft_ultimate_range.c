/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:56:47 by bmayr             #+#    #+#             */
/*   Updated: 2025/05/14 14:53:22 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*result;
	int	size;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (-1);
	}
	size = max - min;
	result = malloc(4 * (size));
	if (result == 0)
		return (-1);
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	*range = result;
	return (size);
}

#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*array;
	int	i;
	int	arr;

	min = -11;
	max = -5;
	i = 0;
	arr = ft_ultimate_range(&array, min, max);
	// ft_ultimate_range(&array, min, max);
	while (i < (max - min))
	{
		// printf("%d ", array[i]);
		i++;
	}
	printf("%d", arr);
}
