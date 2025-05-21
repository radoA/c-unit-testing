/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:51:56 by radandri          #+#    #+#             */
/*   Updated: 2025/05/14 10:33:50 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	is_upper_case;
	int	i;

	is_upper_case = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			is_upper_case = is_upper_case && 0;
		i++;
	}
	if (i == 0 || str[0] == '\0')
		is_upper_case = is_upper_case && 1;
	return (is_upper_case);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char emptyChar[50];

// 	char *lowerCaseOnly = "hello";          // 0
// 	char *otherCaracters = "HEY!! 6468dcs"; // 0
// 	emptyChar[0] = '\0';
// 	printf("%d\n", ft_str_is_uppercase("UPPERCASE"));    // 1
// 	printf("%d\n", ft_str_is_uppercase(lowerCaseOnly));  // 0
// 	printf("%d\n", ft_str_is_uppercase(otherCaracters)); // 0
// 	printf("%d\n", ft_str_is_uppercase(emptyChar));      // 1

// 	return (0);
// }