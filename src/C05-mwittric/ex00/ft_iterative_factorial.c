/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 12:25:45 by mwittric          #+#    #+#             */
/*   Updated: 2025/05/19 12:23:48 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
	{
		result = 1;
		while (nb > 1)
		{
			result *= nb;
			nb--;
		}
		return (result);
	}
}

#include <stdio.h>

int	main(void)
{
	int number;

	number = 3;
	printf("Number: %d, faculty: %d\n", number, ft_iterative_factorial(number));
}