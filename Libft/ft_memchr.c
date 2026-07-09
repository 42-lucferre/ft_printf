/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 22:45:32 by lucferre          #+#    #+#             */
/*   Updated: 2026/06/02 23:33:38 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*b;

	if (n == 0)
		return (NULL);
	b = (unsigned char *) s;
	while (*b != (unsigned char) c && n > 1)
	{
		b++;
		n--;
	}
	if (*b != (unsigned char) c)
		return (NULL);
	return ((void *) b);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;

// 	str = "teste";
// 	printf("%s", ft_memchr(str, 's', 3));
// 	return (0);
// }
