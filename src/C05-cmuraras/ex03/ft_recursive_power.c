/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 20:34:27 by cmuraras          #+#    #+#             */
/*   Updated: 2025/05/16 22:36:42 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

int	main(void)
{
	printf("%d\n", ft_recursive_power(10, 0));
	printf("%d\n", ft_recursive_power(10, 1));
	printf("%d\n", ft_recursive_power(10, 3));
	printf("%d\n", ft_recursive_power(5, 4));
}
