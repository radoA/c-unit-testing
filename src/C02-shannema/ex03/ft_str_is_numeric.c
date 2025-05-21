/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 14:25:49 by shannema          #+#    #+#             */
/*   Updated: 2025/05/17 15:43:46 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Create a function that returns 1 if the given string contains only digits
and 0 if it contains any other character.*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > '9' || str[i] < '0')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "f";
// 	printf("%d", ft_str_is_numeric(str));
// }