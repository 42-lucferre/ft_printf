/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 18:44:23 by lucferre          #+#    #+#             */
/*   Updated: 2026/05/27 19:36:01 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	c;

	c = 0;
	while (*s != '\0')
	{
		s++;
		c++;
	}
	return (c);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%lo", ft_strlen("test"));
// 	return (0);
// }
