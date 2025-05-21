/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 20:30:55 by cmuraras          #+#    #+#             */
/*   Updated: 2025/05/16 22:34:48 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(-5));
	printf("%d\n", ft_recursive_factorial(5));
	printf("%d\n", ft_recursive_factorial(15));
}
