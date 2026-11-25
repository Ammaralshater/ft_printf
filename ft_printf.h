/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_printf.h                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/09 08:04:03 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/12 16:00:51 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_print_char(char c);
int	ft_print_string(char *s);
int	ft_print_number(long n);
int	ft_print_hex(unsigned long n, int uppercase);
int	ft_print_pointer(void *ptr);
int	ft_dispatch(char specifier, va_list *args);
int	ft_process_format(const char *format, va_list *args);
int	ft_print_unsigned(unsigned int n);

#endif
