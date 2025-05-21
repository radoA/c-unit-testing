/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 17:08:52 by dgeiss            #+#    #+#             */
/*   Updated: 2025/05/14 10:18:56 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d\n", ft_iterative_factorial(n));
		n++;
	}
}