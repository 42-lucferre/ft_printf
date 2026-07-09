/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 02:58:41 by lucferre          #+#    #+#             */
/*   Updated: 2026/07/09 03:14:05 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	recursive_fill(char *str, unsigned int n, int c)
{
	unsigned int		r;
	unsigned int		d;

	d = n / 10;
	r = n % 10;
	if (d != 0)
	{
		recursive_fill(str, d, c - 1);
	}
	str[c] = (char)(r + '0');
}

static int	counter(unsigned int n)
{
	unsigned int		d;
	int					c;

	c = 1;
	d = n / 10;
	while (d != 0)
	{
		d = d / 10;
		c++;
	}
	return (c);
}

char	*ft_utoa(unsigned int n)
{
	char	*str;
	int		c;

	c = counter(n);
	str = malloc((c + 1) * sizeof(char));
	if (!str)
		return (NULL);
	recursive_fill(str, n, c - 1);
	str[c] = '\0';
	return (str);
}
