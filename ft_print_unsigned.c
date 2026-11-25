/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_print_unsigned.c                               :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/12 07:40:06 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/12 08:23:01 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	int	count;
	int	written;

	count = 0;
	if (n > 9)
	{
		written = ft_print_unsigned(n / 10);
		if (written < 0)
			return (-1);
		count += written;
	}
	written = ft_print_char(n % 10 + '0');
	if (written < 0)
		return (-1);
	return (count + written);
}
