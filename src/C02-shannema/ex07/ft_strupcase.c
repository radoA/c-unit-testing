/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:22:39 by shannema          #+#    #+#             */
/*   Updated: 2025/05/17 15:59:47 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] += 'A' - 'a';
		}
		i++;
	}
	return (str);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char c[] = "liftmeupplz";
// 	ft_strupcase(c);
// 	printf("%s", c);
// }