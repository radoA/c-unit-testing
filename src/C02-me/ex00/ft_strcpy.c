/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:12:44 by radandri          #+#    #+#             */
/*   Updated: 2025/05/17 21:18:35 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	it;

	it = 0;
	while (str[it] != '\0')
	{
		write(1, &str[it], 1);
		it++;
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char *char1 = "Hello";
	char char2[50] = "world ";
	char *result = ft_strcpy(char2, char1);
	ft_putstr(result); // Hello
	ft_putstr(char2);
	return (0);
}