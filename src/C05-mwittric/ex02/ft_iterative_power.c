/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:42:50 by mwittric          #+#    #+#             */
/*   Updated: 2025/05/19 12:28:53 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	counter;
	int	result;

	counter = 0;
	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (counter < power)
	{
		result *= nb;
		counter++;
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	int number = -5;
	int power = 2;

	printf("%d to power %d\n", number, power);
	printf("equals %d\n", ft_iterative_power(number, power));
	return (0);
}