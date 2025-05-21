/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 08:46:16 by radandri          #+#    #+#             */
/*   Updated: 2025/05/17 14:40:55 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	size_dest;

	size_dest = 0;
	while (dest[size_dest] != '\0')
	{
		size_dest++;
	}
	while (size_dest < size && *src)
	{
		dest[size_dest] = *src;
		src++;
		size_dest++;
	}
	dest[size_dest] = '\0';
	return (size_dest);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char dest[50] = "PO";
// 	printf("**%d**", ft_strlcat(dest, "HELLO", 2));
// 	return (0);
// }