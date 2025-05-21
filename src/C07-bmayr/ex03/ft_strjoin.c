/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 22:24:28 by bmayr             #+#    #+#             */
/*   Updated: 2025/05/14 16:50:13 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_count_chars(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	size_dest;

	i = -1;
	j = -1;
	size_dest = 0;
	while (++i < size)
	{
		while (strs[i][++j])
			size_dest++;
		j = -1;
		while (sep[++j] && i < size - 1)
			size_dest++;
		j = -1;
	}
	return (size_dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		size_dest;
	char	*result;

	i = -1;
	j = -1;
	result = malloc(ft_count_chars(size, strs, sep));
	size_dest = 0;
	while (++i < size)
	{
		while (strs[i][++j])
			result[size_dest++] = strs[i][j];
		j = -1;
		while (sep[++j] && i < (size - 1))
			result[size_dest++] = sep[j];
		if (i < size)
			result[size_dest] = '\0';
		j = -1;
	}
	return (result);
}

int	main(void)
{
	char	*strs[2] = {"hallo", "ich"};
	char	*sep;
	int		size;
	char	*str;

	sep = "sep";
	size = 2;
	str = ft_strjoin(size, strs, sep);
	printf("%s\n", str);
}

// OK
