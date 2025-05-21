/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashadrin <ashadrin@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:57:41 by ashadrin          #+#    #+#             */
/*   Updated: 2025/05/20 00:51:51 by ashadrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	else
	{
		nb *= ft_recursive_power(nb, power - 1);
		return (nb);
	}
}
// #include <stdio.h>
// int main ()
// {
// 	int nb;

// 	nb = ft_recursive_power(7, 2);
// 	printf("She wanted to scream, 
// but everything that came out of her mouth was %d", nb);
// 	return (0);
// }