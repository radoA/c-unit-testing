/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:46:24 by radandri          #+#    #+#             */
/*   Updated: 2025/05/14 15:52:23 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void	ft_putstr11(char *str)
// {
// 	int	it;

// 	it = 0;
// 	while (str[it] != '\0')
// 	{
// 		write(1, &str[it], 1);
// 		it++;
// 	}
// }

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i_src;

	i_src = 0;
	while (src[i_src] != '\0' && i_src < n)
	{
		dest[i_src] = src[i_src];
		i_src++;
	}
	while (i_src < n)
	{
		dest[i_src] = '\0';
		i_src++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char src[] = "Hello";
// 	char dest[] = "df";
// 	char *result;

// 	result = ft_strncpy(dest, src, 3);
// 	ft_putstr11(result);
// 	return (0);
// }