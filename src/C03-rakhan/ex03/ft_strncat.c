/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 20:50:58 by rakhan            #+#    #+#             */
/*   Updated: 2025/05/16 20:29:35 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while ((src[j] != '\0') && (j < nb))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dest1[20] = "Hello ";
	char src1[20] = "Rana";
	char dest[20] = "Hello ";
	char src[20] = "Rana";
	char *n1 = ft_strncat(dest1, src1, 0);
	char *n2 = strncat(dest, src, 0);
	printf("Mine: %s\nTrue: %s\n", n1, n2);
	return (0);
}