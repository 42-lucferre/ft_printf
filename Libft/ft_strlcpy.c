/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 21:48:26 by lucferre          #+#    #+#             */
/*   Updated: 2026/06/04 16:44:54 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;

	i = 0;
	while (i + 1 < dsize && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (dsize != 0)
		dst[i] = '\0';
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s;
// 	char	d[4];

// 	s = "test";
// 	ft_strlcpy(d, s, 4);
// 	printf("%s", d);
// 	return (0);
// }
