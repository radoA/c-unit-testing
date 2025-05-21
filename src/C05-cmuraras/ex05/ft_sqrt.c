/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 21:02:51 by cmuraras          #+#    #+#             */
/*   Updated: 2025/05/16 22:38:25 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	sqrt = 2;
	while (sqrt <= nb / 2)
	{
		if (sqrt * sqrt == nb)
			return (sqrt);
		sqrt++;
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_sqrt(-5));
	printf("%d\n", ft_sqrt(1024));
	printf("%d\n", ft_sqrt(169));
	printf("%d\n", ft_sqrt(71));
}
