/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_print_pointer.c                                :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/09 08:02:46 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/12 15:45:44 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(void *ptr)
{
	unsigned long	address;
	int				written;
	int				count;

	count = 0;
	address = (unsigned long) ptr;
	if (!ptr)
		return (ft_print_string("(nil)"));
	written = ft_print_string("0x");
	if (written < 0)
		return (-1);
	count += written;
	written = ft_print_hex(address, 0);
	if (written < 0)
		return (-1);
	count += written;
	return (count);
}
