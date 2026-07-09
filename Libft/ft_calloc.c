/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 23:38:12 by lucferre          #+#    #+#             */
/*   Updated: 2026/06/04 17:38:54 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*r;
	size_t			i;
	size_t			max;

	max = -1;
	if (size != 0 && nmemb > max / size)
		return (NULL);
	r = malloc(nmemb * size);
	if (!r)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		r[i] = '\0';
		i++;
	}
	return ((void *) r);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;

// 	str = calloc(3, sizeof(char));
// 	printf("%p", str);
// 	free(str);
// 	return (0);
// }
