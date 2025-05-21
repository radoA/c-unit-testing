/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamrouss <mamrouss@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 23:16:57 by mamrouss          #+#    #+#             */
/*   Updated: 2025/05/21 16:31:21 by mamrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new;

	new = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 0 && str[i] <= 9))
		{
			if (new && str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
			new = 0;
		}
		else
		{
			new = 1;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char test[] = "hi, how are you? 42words forty-two; fifty+and+one";
// 	printf("%s\n", ft_strcapitalize(test));
// 	return 0;
// }