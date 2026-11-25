/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_dispatch.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/09 08:17:51 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/12 15:26:08 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_dispatch(char specifier, va_list *args)
{
	if (specifier == '%')
		return (ft_print_char('%'));
	if (specifier == 'c')
		return (ft_print_char(va_arg(*args, int)));
	if (specifier == 's')
		return (ft_print_string(va_arg(*args, char *)));
	if (specifier == 'd' || specifier == 'i')
		return (ft_print_number(va_arg(*args, int)));
	if (specifier == 'u')
		return (ft_print_unsigned(va_arg(*args, unsigned int)));
	if (specifier == 'x' || specifier == 'X')
		return (ft_print_hex(va_arg(*args, unsigned int), specifier == 'X'));
	if (specifier == 'p')
		return (ft_print_pointer(va_arg(*args, void *)));
	else
		return (-1);
}
