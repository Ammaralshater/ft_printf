/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_print_hex.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/09 08:04:54 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/12 15:46:23 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long n, int uppercase)
{
	char	*baselower;
	char	*baseupper;
	int		written;
	int		count;

	count = 0;
	baseupper = "0123456789ABCDEF";
	baselower = "0123456789abcdef";
	if (n >= 16)
	{
		written = ft_print_hex(n / 16, uppercase);
		if (written < 0)
			return (-1);
		count += written;
	}
	if (uppercase == 1)
		written = ft_print_char(baseupper[n % 16]);
	else
		written = ft_print_char(baselower[n % 16]);
	if (written < 0)
		return (-1);
	count += written;
	return (count);
}
