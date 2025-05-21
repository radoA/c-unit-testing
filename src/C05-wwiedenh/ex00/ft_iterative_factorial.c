/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:42:10 by wwiedenh          #+#    #+#             */
/*   Updated: 2025/05/19 11:32:32 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (result);
}

int	main(void)
{
	int	nb;
	int	result;

	nb = 6;
	result = ft_iterative_factorial(nb);
	printf("%d", result);
	return (0);
}
