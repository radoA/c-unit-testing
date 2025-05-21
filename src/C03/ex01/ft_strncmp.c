/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 08:41:32 by radandri          #+#    #+#             */
/*   Updated: 2025/05/17 14:23:46 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	it;

	it = 0;
	while ((*s1 || *s2) && it < n)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
		{
			return (*s1 - *s2);
		}
		it++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char myStr1[] = "ABCD";
// 	char myStr2[] = "ABXZ";
// 	printf("%d\n", ft_strncmp(myStr1, myStr2, 4));
// 	printf("%d", strncmp(myStr1, myStr2, 4));

// 	return (0);
// }