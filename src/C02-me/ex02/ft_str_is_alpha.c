/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:47:34 by radandri          #+#    #+#             */
/*   Updated: 2025/05/14 15:52:38 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	it;

	it = 0;
	while (str[it] != '\0')
	{
		if (!((str[it] >= 'a' && str[it] <= 'z') || (str[it] >= 'A'
					&& str[it] <= 'Z')))
		{
			return (0);
		}
		it++;
	}
	return (1);
}

// void	writenbr(char nbr)
// {
// 	char	nbrc;

// 	nbrc = nbr + '0';
// 	write(1, &nbrc, 1);
// }

// int	main(void)
// {
// 	char	*char1;
// 	char	char2[50];
// 	int		i;
// 	int		j;
// 	int		k;

// 	char1 = "Hello";
// 	char2[0] = '\0';
// 	i = ft_str_is_alpha(char1);
// 	writenbr(i); // 1
// 	j = ft_str_is_alpha(char2);
// 	writenbr(j); // 1
// 	k = ft_str_is_alpha("hiuhi77^");
// 	writenbr(k); // 0
// 	return (0);
// }
