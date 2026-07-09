/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 00:11:57 by lucferre          #+#    #+#             */
/*   Updated: 2026/06/09 13:42:03 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_split(char **split, size_t p)
{
	while (p != 0)
	{
		p--;
		free(split[p]);
	}
	free(split);
	return (NULL);
}

static char	**split_fill(char const *s, char c, char **split, size_t n)
{
	size_t	p;
	size_t	i;

	p = 0;
	while (n-- > 1)
	{
		i = 0;
		while (*s == c)
			s++;
		while (*s != c && *s != '\0')
		{
			i++;
			s++;
		}
		split[p] = malloc((i + 1) * sizeof(char));
		if (!split[p])
			return (free_split(split, p));
		ft_memmove(split[p], (s - i), i);
		split[p][i] = '\0';
		p++;
	}
	split[p] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	size_t	n;
	size_t	i;
	char	**split;

	if (s == NULL)
		return (NULL);
	n = 2;
	i = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	if (i == ft_strlen(s) || *s == '\0')
		n -= 1;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != '\0' && s[i + 1] != c)
			n++;
		i++;
	}
	split = malloc((n) * sizeof(char *));
	if (!split)
		return (NULL);
	split = split_fill(s, c, split, n);
	return (split);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	**x;
// 	size_t	i;

// 	x = ft_split(";abcd;ef;g;;;hij;kl;;", ';');
// 	i = 0;
// 	while (x[i] != NULL)
// 	{
// 		printf("%s\n", x[i]);
// 		i++;
// 	}
// 	return (0);
// }
