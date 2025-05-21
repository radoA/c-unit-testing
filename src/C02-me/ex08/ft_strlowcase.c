/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:54:53 by radandri          #+#    #+#             */
/*   Updated: 2025/05/14 10:34:08 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	upcase_string[50] = "BONJOUR !";
// 	char	random_car[50] = "23_-3FREWG4WVFSD4";

// 	printf("%s\n", ft_strupcase(upcase_string));
// 	printf("%s\n", ft_strupcase(random_car));
// 	return (0);
// }
