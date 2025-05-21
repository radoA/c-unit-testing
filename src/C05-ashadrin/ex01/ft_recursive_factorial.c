/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashadrin <ashadrin@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 09:46:43 by ashadrin          #+#    #+#             */
/*   Updated: 2025/05/20 00:50:45 by ashadrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb == 1)
	{
		return (nb);
	}
	else
	{
		nb *= ft_recursive_factorial(nb - 1);
		return (nb);
	}
}
// #include <stdio.h>
// int main ()
// {
// 	int nb;

// 	nb = ft_recursive_factorial(4);
// 	printf("and this factorial would be %d", nb);
// 	return (0);
// }