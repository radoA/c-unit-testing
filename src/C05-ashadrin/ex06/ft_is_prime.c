/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashadrin <ashadrin@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:42:19 by ashadrin          #+#    #+#             */
/*   Updated: 2025/05/21 19:41:00 by ashadrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
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

// #include <stdio.h>
// int main ()
// {
// 	printf ("don't even try to catch him, 
//he's already %d steps ahead", ft_is_prime(4));
// 	return (0);
// }