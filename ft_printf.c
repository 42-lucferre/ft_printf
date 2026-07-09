/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 16:23:33 by lucferre          #+#    #+#             */
/*   Updated: 2026/07/09 03:20:58 by lucferre         ###   ########.fr       */
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
	write(1, &base[n % 16], 1);
	return (c += 1);
}

static void	detect_format(va_list p_args, char f)
{
	char			c;
	char			*s;
	int				i;
	unsigned long	l;
	unsigned int	u;

	if (f == 'c')
	{
		c = (char)(va_arg(p_args, int));
		write(1, &c, 1);
	}
	else if (f == 's')
	{
		s = va_arg(p_args, char *);
		if (s == NULL)
			write(1, "(null)", 6);
		else
			ft_putstr(s);
	}
	else if (f == 'p')
	{
		s = va_arg(p_args, void *);
		l = (unsigned long) s;
		if (l == 0)
			write(1, "(nil)", 5);
		else
		{
			write(1, "0x", 2);
			ft_puthex(l, 0);
		}
	}
	else if (f == 'd' || f == 'i')
	{
		i = va_arg(p_args, int);
		s = ft_itoa(i);
		ft_putstr(s);
	}
	else if (f == 'u')
	{
		u = va_arg(p_args, unsigned int);
		s = ft_utoa(u);
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
	unsigned int	numero;
	unsigned int	*ponteiro;

	numero = 0;
	ponteiro = &numero;
	printf("teste%u\n", *ponteiro);
	ft_printf("teste%u\n", *ponteiro);
	ft_printf("teste%d\n", -2);
	return (0);
}
