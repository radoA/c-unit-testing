/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:01:30 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/21 10:42:58 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

typedef struct s_stock_str
{
	int				size;
	char			*str;
	char			*copy;
}					t_stock_str;

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	ptr = malloc((i * sizeof(char)) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*ptr;
	int					i;

	ptr = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		ptr[i].size = ft_strlen(av[i]);
		ptr[i].str = av[i];
		ptr[i].copy = ft_strdup(av[i]);
		if (ptr[i].copy == NULL)
		{
			while (--i >= 0)
				free(ptr[i].copy);
			free(ptr);
			return (NULL);
		}
		i++;
	}
	ptr[i].size = 0;
	ptr[i].str = NULL;
	ptr[i].copy = NULL;
	return (ptr);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	j;

	i = 0;
	while (par[i].str != NULL)
	{
		j = 0;
		while (par[i].str[j] != '\0')
		{
			write(1, &par[i].str[j], 1);
			j++;
		}
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		j = 0;
		while (par[i].copy[j] != '\0')
		{
			write(1, &par[i].copy[j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(void)
{
	char				*str_arr[3];
	struct s_stock_str	*p_str;
	char				*str1;
	char				*str2;
	char				*str3;
	int					size;

	str1 = "Hola";
	str2 = "Disestablishmentarianism";
	str3 = "Phenomenon";
	str_arr[0] = str1;
	str_arr[1] = str2;
	str_arr[2] = str3;
	size = 3;
	p_str = ft_strs_to_tab(size, str_arr);
	ft_show_tab(p_str);
}
