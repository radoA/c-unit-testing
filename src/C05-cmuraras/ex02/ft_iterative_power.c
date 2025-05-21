/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 20:34:27 by cmuraras          #+#    #+#             */
/*   Updated: 2025/05/16 22:36:09 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	exponent;
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb;
	exponent = 2;
	while (exponent <= power)
	{
		result *= nb;
		exponent++;
	}
	return (result);
}

int	main(void)
{
	printf("%d\n", ft_iterative_power(10, 0));
	printf("%d\n", ft_iterative_power(10, 1));
	printf("%d\n", ft_iterative_power(10, 3));
	printf("%d\n", ft_iterative_power(5, 4));
}
