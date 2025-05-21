/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashadrin <ashadrin@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:28:42 by ashadrin          #+#    #+#             */
/*   Updated: 2025/05/21 19:41:39 by ashadrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// #include <math.h>
// #include <stdio.h>
// int main ()
// {
// 	printf("almost all of the apples 
//were already eaten: there's only %f left\n", sqrt(9));
// 	printf("%d playful puppies", ft_sqrt(9));
// 	return (0);
// }