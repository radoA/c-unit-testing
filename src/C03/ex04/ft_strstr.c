/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 08:45:02 by radandri          #+#    #+#             */
/*   Updated: 2025/05/17 14:31:35 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	it;

	it = 0;
	while ((*s1 || *s2) && it < n)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
		{
			return (*s1 - *s2);
		}
		it++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	size_to_find;
	int	i;

	i = 0;
	size_to_find = 0;
	if (!to_find)
	{
		return (str);
	}
	while (to_find[size_to_find] != '\0')
	{
		size_to_find++;
	}
	while (str[i] != '\0')
	{
		if (ft_strncmp(&(str[i]), to_find, size_to_find) == 0)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
// #include <unistd.h>

// int	main(void)
// {
// 	char	str[] = "Are you ready lets go";
// 	char	to_find[] = "you";
// 	char	*pointer;

// 	pointer = ft_strstr(str, to_find);
// 	if (pointer)
// 	{
// 		write(1, pointer, 50);
// 	}
// 	return (0);
// }
