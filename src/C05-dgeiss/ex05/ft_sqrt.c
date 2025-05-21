/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:29:40 by dgeiss            #+#    #+#             */
/*   Updated: 2025/05/14 10:24:18 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 0;
	while (i * i <= nb)
		i++;
	i--;
	if (i * i == nb)
		return (i);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(9));
}