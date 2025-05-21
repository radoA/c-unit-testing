/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:52:52 by radandri          #+#    #+#             */
/*   Updated: 2025/05/14 15:53:01 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_printable_char(char c)
{
	return (c >= ' ' && c <= '~');
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(is_printable_char(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char empty_char[50];
// 	char *printable_string_only;
// 	char *no_printable_string;

// 	printable_string_only = "hello-123456!";
// 	no_printable_string = "\n\t\v\f";
// 	empty_char[0] = '\0';
// 	printf("%d\n", ft_str_is_printable(printable_string_only)); // 1
// 	printf("%d\n", ft_str_is_printable(no_printable_string));   // 0
// 	printf("%d\n", ft_str_is_printable(empty_char));            // 1

// 	return (0);
// }