/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:50:10 by radandri          #+#    #+#             */
/*   Updated: 2025/05/14 10:33:44 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	is_lower_case;
	int	i;

	is_lower_case = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			is_lower_case = is_lower_case && 0;
		i++;
	}
	if (i == 0 || str[0] == '\0')
		is_lower_case = is_lower_case && 1;
	return (is_lower_case);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char emptyChar[50];

// 	char *lowerCaseOnly = "hello";          // 1
// 	char *otherCaracters = "HEY!! 6468dcs"; // 0
// 	emptyChar[0] = '\0';
// 	printf("%d\n", ft_str_is_lowercase(lowerCaseOnly));  // 1
// 	printf("%d\n", ft_str_is_lowercase(otherCaracters)); // 0
// 	printf("%d\n", ft_str_is_lowercase(emptyChar));      // 1

// 	return (0);
// }