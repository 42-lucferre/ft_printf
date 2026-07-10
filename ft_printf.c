/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 16:23:33 by lucferre          #+#    #+#             */
/*   Updated: 2026/07/10 01:46:57 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *p)
{
	int	c;

	c = 0;
	while (*p != '\0')
	{
		write(1, p, 1);
		p++;
		c++;
	}
	return (c);
}

int	ft_puthex(long n, int u)
{
	char	*base;
	int		c;

	if (u)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	c = 0;
	if (n > 15)
		c += ft_puthex(n / 16, u);
	write(1, &base[n % 16], 1);
	return (c + 1);
}

static int	detect_format(va_list p_args, char f)
{
	char			c;

	if (f == 'c')
	{
		c = (char)(va_arg(p_args, int));
		return (write(1, &c, 1));
	}
	else if (f == 's')
		return (f_string(p_args));
	else if (f == 'p')
		return (f_pointer(p_args));
	else if (f == 'd' || f == 'i')
		return (f_int(p_args));
	else if (f == 'u')
		return (f_unsigned(p_args));
	else if (f == 'x' || f == 'X')
		return (f_hex(p_args, f));
	else if (f == '%')
		return (write(1, "%%", 1));
	return (-1);
}

int	ft_printf(const char *f, ...)
{
	va_list	p_args;
	int		c;

	va_start(p_args, f);
	c = 0;
	while (*f != '\0')
	{
		if (*f == '%' && *(f + 1) != '\0')
		{
			f++;
			c += detect_format(p_args, *f);
		}
		else
			c += write(1, f, 1);
		f++;
	}
	va_end(p_args);
	return (c);
}

// #include <stdio.h>
// #include "ft_printf.h"

// int	main(void)
// {
// 	unsigned int	n;
// 	unsigned int	*point;

// 	n = 489;
// 	point = &n;
// 	printf("teste%xl%d\n", n, printf("opa%daa%p", 2, (void *) point));
// 	ft_printf("teste%xl%d\n", n, ft_printf("oft%daa%p", 2, (void *) point));
// 	return (0);
// }
