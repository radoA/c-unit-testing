/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:50:22 by wwiedenh          #+#    #+#             */
/*   Updated: 2025/05/19 11:38:54 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb < 0)
		return (0);
	while (sqrt * sqrt < nb)
		sqrt++;
	if (sqrt * sqrt == nb)
		return (sqrt);
	return (0);
}

int	main(void)
{
	int	n;
	int	result;

	n = 36;
	result = ft_sqrt(n);
	printf("%d", result);
}
