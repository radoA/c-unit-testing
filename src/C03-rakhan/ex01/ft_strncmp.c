/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 20:49:30 by rakhan            #+#    #+#             */
/*   Updated: 2025/05/16 20:26:00 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	start;

	start = 0;
	if (n == 0)
		return (0);
	while ((s1[start] == s2[start]) && ((s1[start] != '\0'
				|| (s2[start] != '\0'))) && (start != n - 1))
	{
		start++;
	}
	return (s1[start] - s2[start]);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[] = "Hello World";
	char str2[] = "World";
	int n1 = ft_strncmp(str1, str2, 6);
	int n2 = strncmp(str1, str2, 6);
	printf("Mine: %i\nTrue: %i\n", n1, n2);
	return (0);
}