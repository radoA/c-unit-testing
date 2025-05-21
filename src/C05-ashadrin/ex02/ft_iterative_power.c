/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashadrin <ashadrin@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:44:37 by ashadrin          #+#    #+#             */
/*   Updated: 2025/05/20 00:50:27 by ashadrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	g;

	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	g = nb;
	while (power != 1)
	{
		nb *= g;
		power--;
	}
	return (nb);
}
// #include <stdio.h>
// int main ()
// {
// 	int nb;

// 	nb = ft_iterative_power(5, 3);
// 	printf("i like it when it's %d degrees outside", nb);
// 	return (0);
// }