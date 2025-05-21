/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 20:14:35 by cmuraras          #+#    #+#             */
/*   Updated: 2025/05/16 22:33:11 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	multiplier;

	if (nb < 0)
		return (0);
	fact = 1;
	multiplier = 1;
	while (multiplier < nb)
	{
		multiplier++;
		fact *= multiplier;
	}
	return (fact);
}

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(-5));
	printf("%d\n", ft_iterative_factorial(5));
	printf("%d\n", ft_iterative_factorial(15));
}
