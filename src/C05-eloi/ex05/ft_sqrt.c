/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 23:06:39 by eberling          #+#    #+#             */
/*   Updated: 2025/05/14 12:29:11 by radandri         ###   ########.fr       */
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

int	ft_sqrt(int nb)
{
	int	i;
	int	res;

	if (nb == 0)
		return (0);
	i = 1;
	res = 0;
	while (i != 1073741823)
	{
		res = i * i;
		if (res == nb)
			return (i);
		i++;
	}
	return (0);
}
#include <stdio.h>

int	main(void)
{
	printf("square root of 99000 = %d", ft_sqrt(99000));
}