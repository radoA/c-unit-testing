/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashadrin <ashadrin@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 00:18:17 by ashadrin          #+#    #+#             */
/*   Updated: 2025/05/20 00:51:29 by ashadrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	p;
	int	j;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		p = 1;
	j = 1;
	while (p <= nb)
	{
		j *= p;
		p++;
	}
	return (j);
}
// #include <stdio.h>
// int main ()
// {
// 	int j;

// 	j = ft_iterative_factorial(3);
// 	printf("just for the sake of purely knowing it: %d", j);
// 	return (0);
// }