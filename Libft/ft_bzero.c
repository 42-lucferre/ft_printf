/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 22:53:53 by lucferre          #+#    #+#             */
/*   Updated: 2026/05/27 23:26:57 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*t;
	size_t			i;

	t = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		t[i] = '\0';
		i++;
	}
}

// #include <stdlib.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	*s;

// 	s = malloc(sizeof(char) * 5);
// 	ft_memset(s, 'z', 4);
// 	ft_bzero(s, 2);
// 	printf("%s", s);
// 	return (0);
// }
