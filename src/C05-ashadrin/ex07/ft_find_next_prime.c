/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashadrin <ashadrin@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:58:59 by ashadrin          #+#    #+#             */
/*   Updated: 2025/05/21 19:40:10 by ashadrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_if_prime(int nb)
{
	int	p;

	p = 2;
	if (nb < 2)
		return (0);
	while (p < nb)
	{
		if (nb % p == 0)
			return (0);
		else
			p++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	g;
	int	r;

	g = nb + 1;
	r = nb - 1;
	if (ft_if_prime(nb) == 1)
		return (nb);
	else
		while (ft_if_prime(g) != 1)
			g++;
	return (g);
}

// #include <stdio.h>
// int main ()
// {
// 	printf("don't feel like swimming today,
//  maybe in %d days", ft_find_next_prime(100));
// 	return (0);
// }