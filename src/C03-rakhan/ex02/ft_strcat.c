/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 20:50:29 by rakhan            #+#    #+#             */
/*   Updated: 2025/05/16 20:26:55 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dest1[20] = "Hallo";
	char src1[20] = " Wie gehts";
	char dest[20] = "Hallo";
	char src[20] = " Wie gehts";
	char *n1 = ft_strcat(dest1, src1);
	char *n2 = strcat(dest, src);
	printf("Mine: %s\nTrue: %s\n", n1, n2);
	return (0);
}