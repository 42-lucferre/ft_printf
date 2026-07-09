/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 20:18:46 by lucferre          #+#    #+#             */
/*   Updated: 2026/06/05 20:44:15 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*s3;
	size_t	i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s3 = malloc(((len1 + len2) * sizeof(char)) + 1);
	if (!s3)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		s3[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		s3[i + len1] = s2[i];
		i++;
	}
	s3[len1 + len2] = '\0';
	return (s3);
}
