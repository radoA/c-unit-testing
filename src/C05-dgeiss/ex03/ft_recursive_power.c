/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 17:35:28 by dgeiss            #+#    #+#             */
/*   Updated: 2025/05/14 10:22:50 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	if (power > 0)
	{
		result = nb * ft_recursive_power(nb, power - 1);
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_power(3, 2));
	printf("%d\n", ft_recursive_power(-3, 2));
	printf("%d\n", ft_recursive_power(-2, -3));
	printf("%d\n", ft_recursive_power(-4, 0));
	return (0);
}