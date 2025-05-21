/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 08:56:47 by wwiedenh          #+#    #+#             */
/*   Updated: 2025/05/19 11:44:00 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	t;

	t = 2;
	while (nb <= 2147483647)
	{
		if (nb <= 2)
			return (2);
		while (nb > 3 && t * t < nb && nb % 2 != 0 && nb % 3 != 0)
		{
			return (nb);
			t++;
		}
		nb++;
	}
	return (0);
}
int	main(void)
{
	int	nb;
	int	result;

	nb = 978;
	result = ft_find_next_prime(nb);
	printf("%d", result);
	return (0);
}
