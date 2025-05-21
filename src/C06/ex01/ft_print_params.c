/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:03:12 by radandri          #+#    #+#             */
/*   Updated: 2025/05/19 20:54:59 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

void	putstring(char *string)
{
	while (*string)
	{
		write(1, string, 1);
		string++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc >= 1)
	{
		while (argv[i])
		{
			putstring(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
