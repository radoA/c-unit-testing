/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashadrin <ashadrin@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:15:55 by ashadrin          #+#    #+#             */
/*   Updated: 2025/05/20 19:38:49 by ashadrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	fnumber;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
	{
		fnumber = ft_fibonacci(index - 1) + ft_fibonacci (index - 2);
		return (fnumber);
	}
}
// #include <stdio.h>
// int main ()
// {
// 	int fnumber;

// 	fnumber = ft_fibonacci(14);
// 	printf("life is like jumping through a hoop %d times in a row", fnumber);
// 	return (0);
// }