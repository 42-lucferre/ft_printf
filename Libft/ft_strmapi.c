/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 16:41:59 by lucferre          #+#    #+#             */
/*   Updated: 2026/06/07 17:24:26 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char	test_f(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 		c -= 32;
// 	return (c);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;

// 	str = "teste";
// 	printf("%s", ft_strmapi(str, test_f));
// 	return (0);
// }
