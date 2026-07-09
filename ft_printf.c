/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 16:23:33 by lucferre          #+#    #+#             */
/*   Updated: 2026/07/09 01:16:09 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putstr(char *p)
{
	while (*p != '\0')
	{
		write(1, p, 1);
		p++;
	}
}

static long	ft_puthex(long n, int u)
{
	char	*base;
	long	c;

	if (u)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	c = 0;
	if (n > 15)
		c += ft_puthex(n / 16, u);
	
}

static void	detect_format(va_list p_args, char f)
{
	char	c;
	char	*s;
	int		i;
	long	l;

	if (f == 'c')
	{
		c = (char)(va_arg(p_args, int));
		write(1, &c, 1);
	}
	else if (f == 's')
	{
		s = va_arg(p_args, char *);
		ft_putstr(s);
		// while (*s != '\0')
		// 	write(1, s++, 1);
	}
	else if (f == 'p')
	{
		s = va_arg(p_args, void *);
		l = s;
		ft_puthex(l, 0);
	}
	else if (f == 'd' || f == 'i')
	{
		i = va_arg(p_args, int);
		s = ft_itoa(i);
		ft_putstr(s);
	}
}

int	ft_printf(const char *f, ...)
{
	va_list	p_args;
	int		i;

	va_start(p_args, f);
	i = 0;
	while (f[i] != '\0')
	{
		if (f[i] == '%')
		{
			i++;
			detect_format(p_args, f[i]);
		}
		else
		{
			write(1, &f[i], 1);
		}
		i++;
	}
	return (i);
}

#include <stdio.h>

int	main(void)
{
	int	numero;
	int	*ponteiro;

	numero = 42;
	ponteiro = &numero;
	printf("teste%p\n", (void *)&numero);
	printf("teste%p\n", (void *)ponteiro);
	ft_printf("teste%d\n", -2);
	return (0);
}
