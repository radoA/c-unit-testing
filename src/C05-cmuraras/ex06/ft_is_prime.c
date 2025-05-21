/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 21:23:56 by cmuraras          #+#    #+#             */
/*   Updated: 2025/05/16 22:39:31 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
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

int	main(void)
{
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(221));
	printf("%d\n", ft_is_prime(223));
}
