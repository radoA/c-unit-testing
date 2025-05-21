/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 17:39:15 by bmayr             #+#    #+#             */
/*   Updated: 2025/05/14 14:48:56 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*result;
	int		size;
	int		i;

	size = 0;
	i = 0;
	while (src[size])
		size++;
	result = malloc(size * 4);
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	printf("%s", ft_strdup("Hallo Test!"));
}
