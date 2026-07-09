/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 19:48:34 by lucferre          #+#    #+#             */
/*   Updated: 2026/05/27 22:39:48 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*t;
	size_t			i;

	t = (unsigned char *) s;
	c = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		t[i] = c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	*s;

// 	s = malloc(sizeof(char) * 10);
// 	ft_memset(s, 'z', 5);
// 	printf("%s", s);
// 	return (0);
// }
