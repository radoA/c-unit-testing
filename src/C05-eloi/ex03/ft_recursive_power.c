/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:31:43 by eberling          #+#    #+#             */
/*   Updated: 2025/05/14 12:24:00 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

#include <stdio.h>

int	main(void)
{
	printf("%d \n", ft_recursive_power(5, 2));
}