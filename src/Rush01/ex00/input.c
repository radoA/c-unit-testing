/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 20:21:31 by sdarius-          #+#    #+#             */
/*   Updated: 2025/05/11 23:15:34 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*inputf(char str[], int size)
{
	int	*input;
	int	i;

	input = malloc(sizeof(int) * 16);
	i = 0;
	while (i < size * 4)
	{
		printf("%d", str[i] - '0');
		input[i] = str[i] - '0';
		printf("%d", input[i]);
		i++;
	}
	return (input);
}
