/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formats.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 03:32:36 by lucferre          #+#    #+#             */
/*   Updated: 2026/07/09 22:55:31 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	f_string(va_list p_args)
{
	char	*s;

	s = va_arg(p_args, char *);
	if (s == NULL)
		return (write(1, "(null)", 6));
	else
		return (ft_putstr(s));
}

int	f_pointer(va_list p_args)
{
	char			*s;
	unsigned long	l;

	s = va_arg(p_args, void *);
	l = (unsigned long) s;
	if (l == 0)
		return (write(1, "(nil)", 5));
	else
	{
		if (write(1, "0x", 2) == -1)
			return (-1);
		l = ft_puthex(l, 0);
		if (l == -1)
			return (-1);
		return (l + 2);
	}
}

int	f_int(va_list p_args)
{
	int		i;
	char	*s;

	i = va_arg(p_args, int);
	s = ft_itoa(i);
	if (!s)
		return (-1);
	return (ft_putstr(s));
}

int	f_unsigned(va_list p_args)
{
	int				len;
	unsigned int	u;
	char			*s;

	u = va_arg(p_args, unsigned int);
	s = ft_utoa(u);
	if (!s)
		return (-1);
	len = ft_putstr(s);
	free(s);
	return (len);
}

int	f_hex(va_list p_args, char f)
{
	unsigned int	u;

	u = va_arg(p_args, unsigned int);
	if (f == 'x')
		return (ft_puthex(u, 0));
	else
		return (ft_puthex(u, 1));
}
