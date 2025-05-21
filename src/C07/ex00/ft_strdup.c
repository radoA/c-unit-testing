/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 23:28:09 by radandri          #+#    #+#             */
/*   Updated: 2025/05/21 16:13:46 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_lengh(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	if (src == NULL)
		return (NULL);
	dest = (char *)malloc(sizeof(char) * (str_lengh(src) + 1));
	if (dest == NULL)
		return (NULL);
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
// 	char tocopy[] = "hi man!!!";
// 	char *dest;
// 	dest = ft_strdup(tocopy);

// 	if (dest == NULL)
// 		printf("NULL");
// 	printf("%s", dest);
// 	return (0);
// }