/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 18:59:35 by lucferre          #+#    #+#             */
/*   Updated: 2026/06/04 20:51:57 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*t;
	unsigned char	*u;

	if (!dest && !src)
		return (dest);
	i = 0;
	t = (unsigned char *) src;
	u = (unsigned char *) dest;
	while (i < n)
	{
		u[i] = t[i];
		i++;
	}
	return (dest);
}

	//if (!dest || !src)

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	*s;
// 	char	*d;

// 	d = malloc(sizeof(char) * 10);
// 	s = NULL;
// 	ft_memcpy(d, s, 2);
// 	printf("%s", d);
// 	return (0);
// }
