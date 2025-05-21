/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:42:17 by bmayr             #+#    #+#             */
/*   Updated: 2025/05/14 16:49:54 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;

	i = 0;
	if (min >= max)
		return (0);
	result = malloc(4 * (max - min));
	if (result == 0)
		return (result);
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}

int	main(void)
{
	// printf("%d",*ft_range(-4, -2));
	ft_range(-1, 5);
	copy in function line 30 : printf("%d \n", result[i]);
}

// OK