/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamrouss <mamrouss@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 23:28:08 by mamrouss          #+#    #+#             */
/*   Updated: 2025/05/19 16:30:46 by mamrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcpy(char *dest, char *src)

{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)

{
	char	src[40];
	char	dest[100];

	strcpy(dest, "barararaaaaaaaaaa1122222222222232323232323");
	strcpy(src, "abrakadabrappppppppppppp");
	strcpy(dest, src);

	printf("%s\n", dest);
	return (0);
}*/

// int	main(void)

// {
// 	char	dest[100];
// 	char	src[40];

// 	ft_strcpy(dest, "\0");
// 	ft_strcpy(src, "gsgsgdggdggdhhhhhs");
// 	printf("%s\n", ft_strcpy(dest, src));
// 	printf("\n");
// 	return (0);
// }
