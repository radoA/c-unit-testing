/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 14:44:57 by shannema          #+#    #+#             */
/*   Updated: 2025/05/17 20:13:05 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Create a function that returns 1 
//if the given string contains only lowercase alphabetical characters 
//and 0 if it contains any other character.

int	ft_str_is_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 'a' || str[i] > 'z')
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
// 	char	str[] = "n";
// 	printf("%d", ft_str_is_lowcase(str));
// }