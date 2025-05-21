/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:35:58 by mwittric          #+#    #+#             */
/*   Updated: 2025/05/19 12:29:14 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	counter;
	int	result;

	counter = 0;
	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		result = nb * ft_recursive_power(nb, power - 1);
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	int number = -5;
	int power = 0;

	printf("%d to power %d\n", number, power);
	printf("equals %d\n", ft_recursive_power(number, power));
	return (0);
}