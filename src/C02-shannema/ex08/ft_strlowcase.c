/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:34:10 by shannema          #+#    #+#             */
/*   Updated: 2025/05/17 20:13:48 by shannema         ###   ########.fr       */
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
			str[i] += 'a' - 'A';
		}
		i++;
	}
	return (str);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char c[] = "WHATSUP";
// 	ft_strlowcase(c);
// 	printf("%s", c);
// }