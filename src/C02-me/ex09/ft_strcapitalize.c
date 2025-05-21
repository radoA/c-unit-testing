/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:56:21 by radandri          #+#    #+#             */
/*   Updated: 2025/05/14 10:34:19 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		if ((str[i] >= 'a' && str[i] <= 'z') && str[i - 1] <= '/')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char input_char[220] = "hi, how are you? 42words foRty-two; fifty+and+one";
// 	char test[220] = "HI, HOW ARE YOU? 42WORDS FORTY-TWO; FIFTY+AND+ONE";

// 	printf("%s\n", ft_strcapitalize(input_char));
// 	printf("%s\n", ft_strcapitalize(test));

// 	return (0);
// }