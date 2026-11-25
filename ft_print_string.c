/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_print_string.c                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/09 08:02:12 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/09 10:13:48 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *s)
{
	int	i;
	int	written;

	i = 0;
	if (!s)
		s = "(null)";
	while (s[i] != '\0')
	{
		written = write(1, &s[i], 1);
		if (written != 1)
			return (-1);
		i++;
	}
	return (i);
}
