/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:32:43 by radandri          #+#    #+#             */
/*   Updated: 2025/05/05 20:43:37 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap1(int *a, int *b)
{
	int	tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	it;
	int	j;

	it = 0;
	j = size - 1;
	while (it < j)
	{
		ft_swap1(&tab[it], &tab[size - 1 - it]);
		it++;
		j--;
	}
}
