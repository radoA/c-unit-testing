/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 21:23:56 by cmuraras          #+#    #+#             */
/*   Updated: 2025/05/16 22:45:04 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>

int	is_prime(int nb)
{
	int	divider;

	if (nb <= 1)
		return (0);
	divider = 2;
	while (divider <= nb / 2)
	{
		if (nb % divider == 0)
			return (0);
		divider++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	prime;

	prime = nb;
	while (prime < INT_MAX)
	{
		if (is_prime(prime))
			return (prime);
		prime++;
	}
	return (-1);
}

int	main(void)
{
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(200));
	printf("%d\n", ft_find_next_prime(221));
	printf("%d\n", ft_find_next_prime(229));
	printf("%d\n", ft_find_next_prime(INT_MAX));
}
