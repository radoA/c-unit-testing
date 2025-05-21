/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 08:39:28 by radandri          #+#    #+#             */
/*   Updated: 2025/05/15 15:07:49 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*(s1) && *(s2) && *(s1) == *(s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
// #include <unistd.h>

// void	writenbr(char nbr)
// {
// 	char	nbrc;

// 	nbrc = nbr + '0';
// 	write(1, &nbrc, 1);
// }

// int	main(void)
// {
// 	char myStr1[] = "ABCD";
// 	char myStr2[] = "ABCE";
// 	writenbr(ft_strcmp(myStr1, myStr2)); //-1

// 	writenbr(ft_strcmp(myStr1, "ABCD")); // 0

// 	writenbr(ft_strcmp("ABCDEFGHI", myStr1)); // 1
// 	return (0);
// }