/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 21:09:18 by lucferre          #+#    #+#             */
/*   Updated: 2026/06/02 21:46:45 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (*s != (char) c && i > 0)
	{
		s--;
		i--;
	}
	if (i == 0 && *s != (char) c)
		return (NULL);
	return ((char *) s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	c;
// 	char	*str;

// 	c = 't';
// 	str = "teste";
// 	printf("%s", ft_strrchr(str, c));
// 	return (0);
// }
