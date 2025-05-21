/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:14:44 by wwiedenh          #+#    #+#             */
/*   Updated: 2025/05/19 11:35:47 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0 || nb == 0)
		return (1);
	power = power - 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

int	main(void)
{
	int	nb;
	int	power;
	int	result;

	nb = 0;
	power = 3;
	result = ft_iterative_power(nb, power);
	printf("%d", result);
	return (0);
}
