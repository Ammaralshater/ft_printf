/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_process_format.c                               :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/09 21:34:42 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/12 07:41:52 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_process_format(const char *format, va_list *args)
{
	int	i;
	int	result;
	int	written;

	result = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			written = ft_print_char(format[i]);
		else
		{
			written = ft_dispatch(format[i + 1], args);
			i++;
		}
		if (written < 0)
			return (-1);
		result += written;
		i++;
	}
	return (result);
}
