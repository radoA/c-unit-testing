/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-zein <ael-zein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 14:14:44 by ael-zein          #+#    #+#             */
/*   Updated: 2025/05/21 14:37:40 by ael-zein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	min;
	int	nbr;

	nbr = 0;
	min = 0;
	while (*str == '\f' || *str == '\n' || *str == '\r' || *str == '\v'
		|| *str == '\t' || *str == ' ')
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			min++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10;
		nbr += *str - '0';
		str++;
	}
	if (min % 2 != 0)
		return (-nbr);
	return (nbr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;

// 	str = "  --+--+--2147483648)a34bb567";
// 	printf("%d\n", ft_atoi(str));
// }

// // integer * 10 + (character - '0')
