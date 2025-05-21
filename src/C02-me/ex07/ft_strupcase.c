/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:54:07 by radandri          #+#    #+#             */
/*   Updated: 2025/05/14 10:34:02 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
// 	char	lowcase_string[50] = "bonjour !";
// 	char	random_car[50] = "23_-3frewg4wvfsd4";

// 	printf("%s\n", ft_strupcase(lowcase_string));
// 	printf("%s\n", ft_strupcase(random_car));
// 	return (0);
// }
