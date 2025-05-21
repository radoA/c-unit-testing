/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 23:28:26 by radandri          #+#    #+#             */
/*   Updated: 2025/05/21 20:22:08 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_lengh(char *src)
{
	int	i;

	if (!src)
		return (0);
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	if (!src || !dest)
		return (dest);
	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*output;
	int		i;
	int		tot;

	if (size == 0 || !strs)
		return (NULL);
	i = 0;
	tot = 0;
	while (i < size)
	{
		tot = tot + str_lengh((strs)[i]);
		if (i < size - 1)
			tot = tot + str_lengh(sep);
		i++;
	}
	output = (char *)malloc(sizeof(char) * tot + 1);
	if (!output)
		return (NULL);
	output[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(output, strs[i]);
		if (i < size - 1)
			ft_strcat(output, sep);
		i++;
	}
	return (output);
}

#include <unistd.h>

void	printstring(char *string)
{
	int	i;

	i = 0;
	while (string && string[i] != '\0')
	{
		write(1, &string[i], 1);
		i++;
	}
}

// int	main(void)
// {
// 	char *input[4] = {"cvxcv", "merhaba", "bonjour", "PEPE"};
// 	char *sep = ";";
// 	int size = 4;
// 	char *output;
// 	output = ft_strjoin(size, input, sep);
// 	printstring(output);
// 	return (0);
// }