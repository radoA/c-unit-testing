/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 20:49:04 by rakhan            #+#    #+#             */
/*   Updated: 2025/05/16 20:18:46 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[] = "Hallo";
	char str2[] = "Halo";
	int n1 = ft_strcmp(str1, str2);
	int n2 = strcmp(str1, str2);
	printf("Mine: %i\nTrue: %i\n", n1, n2);
	return (0);
}