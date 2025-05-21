/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:48:48 by radandri          #+#    #+#             */
/*   Updated: 2025/05/14 10:33:37 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writenbr3(char nbr)
{
	char	nbrc;

	nbrc = nbr + '0';
	write(1, &nbrc, 1);
}

int	ft_str_is_numeric(char *str)
{
	int	is_numeric;
	int	i;

	is_numeric = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			is_numeric = is_numeric && 0;
		}
		i++;
	}
	if (i == 0 || str[0] == '\0')
		return (is_numeric);
	return (is_numeric);
}

// int	main(void)
// {
// 	char	*char1;
// 	char	empty_char[50];
// 	int		i;
// 	int		j;
// 	int		k;

// 	char1 = "123456789";
// 	empty_char[0] = '\0';
// 	i = ft_str_is_numeric(char1);
// 	writenbr3(i); // 1
// 	j = ft_str_is_numeric(empty_char);
// 	writenbr3(j); // 1
// 	k = ft_str_is_numeric("131jiui-");
// 	writenbr3(k);
// 	return (0);
// }
