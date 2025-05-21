/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 01:14:23 by shannema          #+#    #+#             */
/*   Updated: 2025/05/17 15:48:27 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
// #include <stdio.h>

// int	main(void)
// {
// 	char	dest[] = "LetsSeeIfWeCanDoIt";
// 	char	src[] = "TestLength";
// 	printf("%s", ft_strcpy(dest, src));
// 	return (0);
// }
