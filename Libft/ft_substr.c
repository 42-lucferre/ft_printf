/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:33:03 by lucferre          #+#    #+#             */
/*   Updated: 2026/06/05 20:00:06 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*sub;
	size_t	s_len;
	size_t	c;

	str = (char *) s;
	s_len = ft_strlen(str);
	start = (size_t)start;
	if (len == 0 || s_len < start)
		return (ft_strdup(""));
	if (len > s_len - start)
		sub = malloc(((s_len - start) * sizeof(char)) + 1);
	else
		sub = malloc((len * sizeof(char)) + 1);
	if (!sub)
		return (NULL);
	c = 0;
	while (c < len && str[start + c] != '\0')
	{
		sub[c] = str[start + c];
		c++;
	}
	sub[c] = '\0';
	return (sub);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;
// 	char	*sub;

// 	str = "teste";
// 	sub = ft_substr(str, 1, 3);
// 	printf("%s\n", sub);
// 	return (0);
// }
