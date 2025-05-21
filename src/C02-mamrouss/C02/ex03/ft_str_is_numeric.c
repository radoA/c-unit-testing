/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamrouss <mamrouss@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:16:39 by mamrouss          #+#    #+#             */
/*   Updated: 2025/05/20 18:06:51 by mamrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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

// 	str1 = "fhfkf1fjf";
// 	str2 = "1111111";
// 	str3 = "";
// 	printf("%d\n", ft_str_is_numeric(str1));
// 	printf("%d\n", ft_str_is_numeric(str2));
// 	printf("%d\n", ft_str_is_numeric(str3));
// 	return (0);
// }
