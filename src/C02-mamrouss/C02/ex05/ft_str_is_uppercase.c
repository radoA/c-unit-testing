/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamrouss <mamrouss@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 19:42:25 by mamrouss          #+#    #+#             */
/*   Updated: 2025/05/20 18:07:59 by mamrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;

// 	str1 = "fhfkfhfjf";
// 	str2 = "YYYDTFRTD";
// 	str3 = "";

// 	printf("%d\n", ft_str_is_uppercase(str1));
// 	printf("%d\n", ft_str_is_uppercase(str2));
// 	printf("%d\n", ft_str_is_uppercase(str3));

// 	return (0);
// }
