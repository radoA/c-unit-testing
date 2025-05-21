/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alang <alang@42student.heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 18:05:40 by alang             #+#    #+#             */
/*   Updated: 2025/05/14 16:47:31 by alang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
//#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_count_len(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		i++;
	}
	return (i);
}

t_stock_str	*ft_parse(char *str, t_stock_str *result)
{
	int	i;

	i = 0;
	result -> str = str;
	result -> size = ft_count_len(str);
	result -> copy = malloc(result -> size * sizeof(char));
	if (result -> copy != NULL)
	{
		while (str && str[i])
		{
			result -> copy[i] = str[i];
			i++;
		}
		result -> copy[i] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (result);
}

void	free_on_error(int ac, t_stock_str *elements)
{
	int	i;

	i = 0;
	while (i < ac && elements[i].copy != NULL)
	{
		free(elements[i].copy);
	}
	free(elements);
}

void	*ft_create_null_element(t_stock_str *current)
{
	current -> str = NULL;
	current -> size = 0;
	current -> copy = NULL;
	return (current);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*results;
	t_stock_str	*current;

	results = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (results == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		current = ft_parse(av[i], &results[i]);
		if (current == NULL)
		{
			free_on_error(ac, results);
			return (NULL);
		}
		i++;
	}
	ft_create_null_element(&results[i]);
	return (results);
}

// void	ft_putchar(char char_nb)
// {
// 	write(1, &char_nb, 1);
// }

// void	ft_putnbr(int nb)
// {
// 	if (nb < -9)
// 	{
// 		ft_putchar('-');
// 		ft_putnbr((nb / 10) * -1);
// 		ft_putnbr((nb % 10) * -1);
// 	}
// 	else if (nb < 0)
// 	{
// 		ft_putchar('-');
// 		ft_putnbr(nb * -1);
// 	}
// 	else if (nb > 9)
// 	{
// 		ft_putnbr(nb / 10);
// 		ft_putnbr(nb % 10);
// 	}
// 	else
// 	{
// 		ft_putchar(nb + '0');
// 	}
// }

// void ft_show_tab(struct s_stock_str *par)
// {
// 	int i = 0;
// 	if (par == NULL)
// 		return ;
// 	while(&par[i] != NULL && par[i].str != NULL)
// 	{
// 		write(1, par[i].str, par[i].size);
// 		write(1, "\n", 1);
// 		ft_putnbr(par[i].size);
// 		write(1, "\n", 1);
// 		write(1, par[i].str, par[i].size);
// 		write(1, "\n", 1);
// 		i++;
// 	}
// }

// int main(void)
// {
// 	char *c[5] = {"noch einer", "testet", "1123", "noch einer", "test"};
// 	t_stock_str *results = ft_strs_to_tab(5, c);
// 	int i = 0;
// 	ft_show_tab(results);
// }