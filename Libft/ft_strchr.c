/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 20:24:23 by lucferre          #+#    #+#             */
/*   Updated: 2026/06/02 21:12:25 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *) s;
	while (*str != (char) c && *str != '\0')
		str++;
	if (*str == '\0' && c != '\0')
		str = NULL;
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	c;
// 	char	*str;

// 	c = 's';
// 	str = "Teste";
// 	printf("%s", ft_strchr(str, c));
// 	return (0);
// }
