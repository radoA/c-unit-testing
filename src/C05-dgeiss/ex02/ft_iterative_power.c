/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 17:27:34 by dgeiss            #+#    #+#             */
/*   Updated: 2025/05/14 10:21:29 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_power(3, 2));
	printf("%d\n", ft_iterative_power(-3, 2));
	printf("%d\n", ft_iterative_power(-2, -3));
	printf("%d\n", ft_iterative_power(-4, 0));
	return (0);
}