/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:03:54 by radandri          #+#    #+#             */
/*   Updated: 2025/05/19 22:49:49 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printstring(char *string)
{
	while (*string)
	{
		write(1, string, 1);
		string++;
	}
}

int	f_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (f_strcmp(argv[i], argv[j]) > 0)
			{
				swap(&argv[i], &argv[j]);
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		printstring(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
