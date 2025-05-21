/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:27:00 by eberling          #+#    #+#             */
/*   Updated: 2025/05/14 12:22:37 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	i = -1;
	while (--i >= power)
		result *= nb;
	return (result);
}
#include <stdio.h>

int	main(void)
{
	printf("%d \n", ft_iterative_power(9, 0));
}