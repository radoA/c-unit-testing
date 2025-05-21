/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 23:28:17 by radandri          #+#    #+#             */
/*   Updated: 2025/05/21 16:13:48 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	intervalle;
	int	*array;
	int	i;
	int	it;

	if (min >= max)
		return (NULL);
	intervalle = max - min;
	array = malloc(sizeof(int) * intervalle);
	if (array == NULL)
		return (NULL);
	i = min;
	it = 0;
	while (i < max)
	{
		array[it] = i;
		i++;
		it++;
	}
	return (array);
}
// #include <stdio.h>

// void	print_array(int *array)
// {
// 	int	size;

// 	size = 0;
// 	if (array)
// 	{
// 		while (array[size])
// 		{
// 			printf("t[%d] = %d\n", size, array[size]);
// 			size++;
// 		}
// 		// printf("t[%d] = %d\n", size, array[size]);
// 	}
// }

// int	main(void)
// {
// 	int	*array;

// 	array = ft_range(-9, 9);
// 	print_array(array);
// 	return (0);
// }
