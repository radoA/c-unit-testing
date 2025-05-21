/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamrouss <mamrouss@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 23:28:15 by mamrouss          #+#    #+#             */
/*   Updated: 2025/05/21 16:44:42 by mamrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = 0;
	while (src[l] != '\0')
		l++;
	if (size != 0)
	{
		while (str[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (l);
}
