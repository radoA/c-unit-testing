/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamrouss <mamrouss@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:22:33 by mamrouss          #+#    #+#             */
/*   Updated: 2025/05/20 18:28:56 by mamrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122) && !(str[i] >= 65 && str[i] <= 90))
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

// 	str1 = "ffgghdghiu";
// 	str2 = "1111111";
// 	str3 = "";
// 	printf("%d\n", ft_str_is_alpha(str1));
// 	printf("%d\n", ft_str_is_alpha(str2));
// 	printf("%d\n", ft_str_is_alpha(str3));
// 	return (0);
// }
