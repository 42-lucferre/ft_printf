/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 00:43:25 by lucferre          #+#    #+#             */
/*   Updated: 2026/06/04 01:07:49 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*r;
	size_t		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	r = malloc((i + 1) * sizeof(char));
	if (!r)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		r[i] = s[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;
// 	char	*cpy;

// 	str = "teste";
// 	cpy = ft_strdup(str);
// 	printf("%s\n", cpy);
// 	free(cpy);
// 	return (0);
// }
