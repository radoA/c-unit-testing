/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 17:17:09 by dgeiss            #+#    #+#             */
/*   Updated: 2025/05/14 10:20:10 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	result = 1;
	if (nb > 0)
	{
		result = nb * ft_recursive_factorial(nb - 1);
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d\n", ft_recursive_factorial(n));
		n++;
	}
}