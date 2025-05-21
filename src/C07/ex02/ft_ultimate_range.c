/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 23:28:22 by radandri          #+#    #+#             */
/*   Updated: 2025/05/21 16:13:52 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	intervalle;
	int	val;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	intervalle = max - min;
	val = min;
	*range = (int *)malloc(sizeof(int) * intervalle);
	i = 0;
	while (val < max)
	{
		(*range)[i] = val;
		val++;
		i++;
	}
	return (intervalle);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int a;
// 	int *arr;
// 	a = ft_ultimate_range(&arr, 1, 20);
// 	for (int i = 0; i < 20 - 1; i++)
// 		printf("%i\n", arr[i]);
// 	return (0);
// }