/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 10:22:25 by radandri          #+#    #+#             */
/*   Updated: 2025/05/04 14:11:19 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	digit;

	digit = 48;
	while (digit <= 57)
	{
		write(1, &digit, 1);
		digit++;
	}
}
