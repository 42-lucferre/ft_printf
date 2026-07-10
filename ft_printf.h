/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 18:27:44 by lucferre          #+#    #+#             */
/*   Updated: 2026/07/09 22:56:48 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "./Libft/libft.h"

int		ft_printf(const char *f, ...);
char	*ft_utoa(unsigned int n);
int		ft_puthex(long n, int u);
int		ft_putstr(char *p);
int		f_string(va_list p_args);
int		f_pointer(va_list p_args);
int		f_int(va_list p_args);
int		f_unsigned(va_list p_args);
int		f_hex(va_list p_args, char f);

#endif