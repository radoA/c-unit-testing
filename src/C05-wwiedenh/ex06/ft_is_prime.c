/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 18:04:35 by wwiedenh          #+#    #+#             */
/*   Updated: 2025/05/19 11:41:16 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	t;

	t = 2;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	while (t * t <= nb)
	{
		if (nb % t == 0)
			return (0);
		t++;
	}
	return (1);
}

int	main(void)
{
	int	nb;
	int	result;

	nb = 3;
	result = ft_is_prime(nb);
	printf("%d", result);
	return (0);
}
