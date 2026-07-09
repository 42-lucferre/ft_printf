/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 21:28:56 by lucferre          #+#    #+#             */
/*   Updated: 2026/06/05 23:30:50 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_cmp(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	len_str;
	size_t	i;
	size_t	b;
	size_t	e;

	len_str = ft_strlen(s1);
	if (len_str == 0)
		return (ft_strdup(s1));
	b = 0;
	while (char_cmp(s1[b], set) == 1 && b < len_str)
		b++;
	i = len_str;
	e = 0;
	while (i-- > 0 && char_cmp(s1[i], set) == 1)
		e++;
	if (b == len_str || b + e >= len_str)
		return (ft_strdup(""));
	trim = malloc((len_str - (b + e) + 1) * sizeof(char));
	if (!trim)
		return (NULL);
	ft_memmove(trim, s1 + b, len_str - b - e);
	trim[len_str - b - e] = '\0';
	return (trim);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s1;
// 	char	*set;

// 	s1 = "abababab";
// 	set = "ab";
// 	printf("%s\n", ft_strtrim(s1, set));
// 	return (0);
// }
