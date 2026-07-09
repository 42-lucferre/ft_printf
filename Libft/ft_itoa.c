/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 14:20:33 by lucferre          #+#    #+#             */
/*   Updated: 2026/06/07 16:36:52 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	recursive_fill(char *str, long n, int c)
{
	int		r;
	int		d;

	d = n / 10;
	r = n % 10;
	if (d != 0)
	{
		recursive_fill(str, d, c - 1);
	}
	str[c] = (char)(r + '0');
}

static int	counter(long n)
{
	long		d;
	int			c;

	c = 1;
	if (n < 0)
	{
		c++;
		n *= -1;
	}
	d = n / 10;
	while (d != 0)
	{
		d = d / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		c;
	long	num;

	num = n;
	c = counter(num);
	if (num < 0)
		num = num * -1;
	str = malloc((c + 1) * sizeof(char));
	if (!str)
		return (NULL);
	recursive_fill(str, num, c - 1);
	if (n < 0)
	{
		str[0] = '-';
	}
	str[c] = '\0';
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;

// 	str = ft_itoa(-2147483648);
// 	printf("%s", str);
// 	return (0);
// }
