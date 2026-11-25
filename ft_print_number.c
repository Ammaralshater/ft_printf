/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_print_number.c                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/09 08:02:21 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/12 07:07:36 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(long n)
{
	int	counter;
	int	written;

	counter = 0;
	if (n < 0)
	{
		written = ft_print_char('-');
		if (written < 0)
			return (-1);
		counter += written;
		n = -n;
	}
	if (n > 9)
	{
		written = ft_print_number(n / 10);
		if (written < 0)
			return (-1);
		counter += written;
	}
	written = ft_print_char(n % 10 + '0');
	if (written < 0)
		return (-1);
	return (counter + written);
}
