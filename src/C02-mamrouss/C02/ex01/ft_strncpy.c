/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamrouss <mamrouss@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 14:29:16 by mamrouss          #+#    #+#             */
/*   Updated: 2025/05/20 18:06:33 by mamrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)

{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)

{
	char	src[40];
	char	dest[100];


	strncpy(dest, "barararaaaaaaaaaa1122222222222232323232323", 10);
	strncpy(src, "abrakadabrappppppppppppp", 6);
	strncpy(dest, src, 4);

	printf("%s\n", dest);
	printf("%s\n", src);
	return (0);
}*/

// int	main(void)

// {
// 	char	dest[100];
// 	char	src[40];

// 	ft_strncpy("gsgsgdggdggdhhhhhs");
// 	printf("%s\n", ft_strncpy(dest, src, 6));
// 	printf("\n");
// 	return (0);
// }
