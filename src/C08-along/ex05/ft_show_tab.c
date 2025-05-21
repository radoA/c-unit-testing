/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alang <alang@42student.heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:40:42 by alang             #+#    #+#             */
/*   Updated: 2025/05/14 16:49:03 by alang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char char_nb)
{
	write(1, &char_nb, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < -9)
	{
		ft_putchar('-');
		ft_putnbr((nb / 10) * -1);
		ft_putnbr((nb % 10) * -1);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	if (par == NULL)
		return ;
	while (&par[i] != NULL && par[i].str != NULL)
	{
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		i++;
	}
}
