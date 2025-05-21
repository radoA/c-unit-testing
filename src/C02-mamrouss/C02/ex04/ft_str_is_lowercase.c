/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamrouss <mamrouss@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 19:29:02 by mamrouss          #+#    #+#             */
/*   Updated: 2025/05/20 18:07:46 by mamrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
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
// 	str2 = "AAAABBBBTTT";
// 	str3 = "";

// 	printf("%d\n", ft_str_is_lowercase(str1));
// 	printf("%d\n", ft_str_is_lowercase(str2));
// 	printf("%d\n", ft_str_is_lowercase(str3));

// 	return (0);
// }
