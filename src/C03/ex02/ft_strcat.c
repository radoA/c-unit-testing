/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 08:42:39 by radandri          #+#    #+#             */
/*   Updated: 2025/05/15 11:45:58 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (dest[++i] != '\0')
	{
	}
	while (src[++j] != '\0')
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	myStr[20] = "Hello";

// 	ft_strcat(myStr, " World!");
// 	printf("%s", myStr);
// }
